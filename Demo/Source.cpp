#include "Schedule.h"
#include<iostream>
#include<map>
#include<algorithm>
#include<time.h>
#include<vector>
#include <thread>
using std::cout; using std::endl; using std::vector;

const int COURSE_COUNT = Schedule::COURSE_COUNT;
const int POP_COUNT = 3000;

typedef std::pair<Schedule, double> Organism;

Course * courseData;

bool compareOrganism(Organism o1, Organism o2) { return o1.second > o2.second; }

void print(Schedule s)
{
	set<Course> semesters[8];
	set<Course>::iterator its[8];
	for (int i = 0; i < COURSE_COUNT; i++) semesters[s[i] - 1].insert(courseData[i]);

	size_t count = 0;
	for (int i = 0; i < 8; i++) {
		count = std::max(count, semesters[i].size());
		its[i] = semesters[i].begin();
	}

	int difficultyTotals[8] = { 0 };

	cout << "\t    1    \t    2    \t    3    \t    4    \t    5    \t    6    \t    7    \t    8    \t" << endl;
	cout << "\t---------\t---------\t---------\t---------\t---------\t---------\t---------\t---------\t" << endl;
	for (int i = 0; i < count; i++) {
		cout << "\t";
		for (int s = 0; s < 8; s++) {
			if (semesters[s].size() > i) {
				difficultyTotals[s] += its[s]->difficulty;
				cout << ((its[s])++)->name;
			}
			else cout << "        ";
			cout << "   \t";
		}
		cout << endl;
	}
	cout << "Diff: \t";
	for (int s = 0; s < 8; s++) cout << difficultyTotals[s] << " (" << difficultyTotals[s] * (.5 - s * .025) << ")\t";
	cout << endl;
}

double evaluate(Organism& o, bool verbose = false) {
	double result = 0;

	int creditCounts[8] = { 0 };
	std::map<Course, int> semesterTaken;
	Schedule string = o.first;

	if (verbose) cout << endl;
	for (int i = 0; i < COURSE_COUNT; i++) {
		//Check each course to see if it's in a valid semester 
		if (!(string[i] == 1 ? courseData[i].semester1 :
			string[i] == 2 ? courseData[i].semester2 :
			string[i] == 3 ? courseData[i].semester3 :
			string[i] == 4 ? courseData[i].semester4 :
			string[i] == 5 ? courseData[i].semester5 :
			string[i] == 6 ? courseData[i].semester6 :
			string[i] == 7 ? courseData[i].semester7 :
			string[i] == 8 ? courseData[i].semester8 :
			-1)) {
			result -= 3;
			if (verbose) std::cout << courseData[i].name << ": " << (int)o.first[i] << ", ";
		}
		creditCounts[o.first[i] - 1] += courseData[i].hours;
		semesterTaken[courseData[i]] = string[i];
	}
	if (verbose && result < 0) cout << endl;

	//Check the total number of hours per semester
	for (int i = 0; i < 8; i++) {
		if (creditCounts[i] > 18) {
			result -= creditCounts[i] - 18;
			if (verbose) std::cout << "Semester " << i << ": " << creditCounts[i] << " hours" << std::endl;
		}
		else if (creditCounts[i] < 12) {
			result -= 12 - creditCounts[i];
			if (verbose) std::cout << "Semester " << i << ": " << creditCounts[i] << " hours" << std::endl;
		}
	}

	//Check the prereqs
	for (int i = 0; i < COURSE_COUNT; i++)
		for (Course prereq : courseData[i].prerequisites)
			if (semesterTaken[courseData[i]] <= semesterTaken[prereq]) {
				result -= 5;
				if (verbose) std::cout << courseData[i].name << " (" << semesterTaken[courseData[i]] << ") but prereq: " << prereq.name << " (" << semesterTaken[prereq] << ")" << std::endl;
			}

	//Assuming valid schedule, go ahead and calculate variance
	if (!result) {
		//Count total weight per semester
		int weightCounts[8] = { 0 };
		for (int i = 0; i < COURSE_COUNT; i++) weightCounts[o.first[i] - 1] += courseData[i].difficulty;

		//Adjust for the differences in semesters
		for (int i = 0; i < 8; i++) weightCounts[i] *= .5 - i * .025;

		//Take the mean
		double mean = 0; for (int i = 0; i < 8; i++)mean += weightCounts[i]; mean /= 8.0;

		//Take the variance
		double variance = 0; for (int i = 0; i < 8; i++)variance += (weightCounts[i] - mean) * (weightCounts[i] - mean); variance /= 8.0;

		//Set the result
		result = 1.0 / variance;

		if (verbose) std::cout << std::endl << "Variance: " << variance << " | Fitness: " << result << endl;
	}
	else if (verbose) std::cout << std::endl << "Fitness: " << result << endl;
	
	o.second = result;
	return result;
}

int main() {
	bool delay = false;
	srand(time(NULL));
	double avgFitness;
	//Load course info for evaluation
	getCourseData(courseData);

	//Create initial population
	Organism parents[POP_COUNT];

	//Evaluate the population
	avgFitness = 0;
	for (int i = 0; i < POP_COUNT; i++) {
		if (!parents[i].second) evaluate(parents[i]);
		avgFitness += parents[i].second;
	}
	avgFitness /= POP_COUNT;

	//Sort by fitness
	std::sort(parents, parents + POP_COUNT, compareOrganism);
	std::cout << "Initial Average Fitness: " << avgFitness << std::endl;

	for (int genCount = 0; genCount < 150; genCount++)
	{
		Organism children[POP_COUNT];

		//set<Schedule> top15percent;
		for (int i = 0; i < POP_COUNT; i++) {
			//if (i < POP_COUNT * .35) top15percent.insert(parents[i].first);
			if (i < POP_COUNT * .15) children[i] = parents[i];
			else Schedule::crossover(parents[rand() % (int)(POP_COUNT *.35)].first, parents[rand() % (int)(POP_COUNT *.35)].first, children[i].first, children[(i == POP_COUNT - 1) ? i : ++i].first);
		}

		//if (top15percent.size() == 1) { cout << "So we converged after " << genCount << " generations..." << endl; break; }

		std::copy(children, children + POP_COUNT, parents);

		//Evaluate the population
		avgFitness = 0;
		for (int i = 0; i < POP_COUNT; i++) {
			if (!parents[i].second) evaluate(parents[i]);
			avgFitness += parents[i].second;
		}
		avgFitness /= POP_COUNT;
		std::cout << "Generation " << genCount << " Average Fitness: " << avgFitness << std::endl;

		//Sort by fitness
		std::sort(parents, parents + POP_COUNT, compareOrganism);		

		std::cout << "Generation " << genCount << " Best Solution: ";
		evaluate(parents[0], true);
		std::cout << endl;

		if (delay) std::this_thread::sleep_for(std::chrono::milliseconds(3500));
	}





	return 0;
}