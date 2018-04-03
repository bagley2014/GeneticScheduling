#include "Schedule.h"
#include<iostream>
#include<map>
#include<algorithm>
#include<time.h>
#include<vector>
using std::cout; using std::endl; using std::vector;

const int COURSE_COUNT = Schedule::COURSE_COUNT;
const int POP_COUNT = 1000;

typedef std::pair<Schedule, double> Organism;

Course * courseData;

int myActualSchedule[COURSE_COUNT] = { 2,4,3,6,5,7,7,1,2,3,2,6,7,6,8,3,3,5,6,8,8,6,1,1,2,7,5,8,6,5,1,2,3,8,8,7,8,4,4,4,7,4 };

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

	cout << "   1    \t   2    \t   3    \t   4    \t   5    \t   6    \t   7    \t   8    \t" << endl;
	cout << "--------\t--------\t--------\t--------\t--------\t--------\t--------\t--------\t" << endl;
	for (int i = 0; i < count; i++) {
		for (int s = 0; s < 8; s++) {
			if (semesters[s].size() > i) cout << ((its[s])++)->name;
			else cout << "        ";
			cout << "   \t";
		}
		cout << endl;
	}
}

double evaluate(Organism& o, bool verbose = false) {
	double result = 0;

	int creditCounts[8] = { 0 };
	std::map<Course, int> semesterTaken;
	Schedule string = o.first;
	//auto string = myActualSchedule;

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

	//Check the total number of hours per semester
	//if (verbose) cout << "Credit Count: ";
	for (int i = 0; i < 8; i++) {
		//if (verbose) cout << i << " = " << creditCounts[i];
		if (creditCounts[i] > 18) {
			result -= creditCounts[i] - 18;
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
		for (int i = 0; i < COURSE_COUNT; i++)weightCounts[o.first[i] - 1] += courseData[i].difficulty;

		//Adjust for the differences in semesters
		for (int i = 0; i < 8; i++)weightCounts[i] *= 1 + i*.1;

		//Take the mean
		double mean = 0; for (int i = 0; i < 8; i++)mean += weightCounts[i]; mean /= 8.0;

		//Take the variance
		double variance = 0; for (int i = 0; i < 8; i++)variance += (weightCounts[i] - mean) * (weightCounts[i] - mean); variance /= 7.0;

		//Set the result
		result = 1.0 / variance;
	}


	if (verbose) std::cout << std::endl;

	o.second = result;
	return result;
}

int main() {
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
	std::cout << avgFitness << std::endl;

	int genCount = 0;
	do {
		Organism children[POP_COUNT];

		for (int i = 0; i < POP_COUNT; i++) {
			if (i < POP_COUNT * .15) children[i] = parents[i];
			else Schedule::crossover(parents[rand() % (int)(POP_COUNT *.35)].first, parents[rand() % (int)(POP_COUNT *.35)].first, children[i].first, children[(i == POP_COUNT - 1) ? i : ++i].first);
		}

		std::copy(children, children + POP_COUNT, parents);

		//Evaluate the population
		avgFitness = 0;
		for (int i = 0; i < POP_COUNT; i++) {
			if (!parents[i].second) evaluate(parents[i]);
			avgFitness += parents[i].second;
		}
		avgFitness /= POP_COUNT;

		//Sort by fitness
		std::sort(parents, parents + POP_COUNT, compareOrganism);
		std::cout << avgFitness << " (" << parents[0].second << ")" << std::endl;

		evaluate(parents[0], true);
		genCount++;
	} while (parents[0].second < 5 || genCount > 100);

	std::cout << "Valid Schedule in only " << genCount << " generations!" << std::endl << endl;
	print(parents[0].first);

	return 0;
}