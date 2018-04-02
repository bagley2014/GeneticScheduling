#include "Schedule.h"
#include<iostream>
#include<map>
#include<algorithm>
#include<time.h>
const int COURSE_COUNT = Schedule::COURSE_COUNT;
const int POP_COUNT = 600;

typedef std::pair<Schedule, int> Organism;

Course * courseData;

int myActualSchedule[COURSE_COUNT] = { 2,4,3,6,5,7,7,1,2,3,2,6,7,6,8,3,3,5,6,8,8,6,1,1,2,7,5,8,6,5,1,2,3,8,8,7,8,4,4,4,7,4 };

bool compareOrganism(Organism o1, Organism o2) { return o1.second > o2.second; }

int evaluate(Organism& o, bool verbose = false) {
	int result = 0;

	int creditCounts[8];
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
	for (int i = 0; i < 8; i++)	if (creditCounts[i] > 18) {
		result += 18 - creditCounts[i];
		if (verbose) std::cout << "Semester " << i << ": " << creditCounts[i] << " hours" << std::endl;
	}

	//Check the prereqs
	for (int i = 0; i < COURSE_COUNT; i++) 
		for (Course prereq : courseData[i].prerequisites) 
			if (semesterTaken[courseData[i]] < semesterTaken[prereq]) {
				result -= 5;
				if (verbose) std::cout << courseData[i].name << " (" << semesterTaken[courseData[i]] << ") but prereq: " << prereq.name << " (" << semesterTaken[prereq] << ")" << std::endl;
			}
		
	

	if(verbose) std::cout << std::endl;

	o.second = result;
	return result;
}

int main() {
	srand(time(NULL));
	double avgFitness;
	//Load course info for evaluation
	Schedule::getCourseData(courseData);

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
	} while (parents[0].second < 0);

	std::cout << "Valid Schedule in only " << genCount << " generations!" << std::endl;

	return 0;
}