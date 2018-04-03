#pragma once
#include <bitset>
#include "Course.h"

class Schedule
{
public:
	Schedule();
	Schedule(int);

	static const int COURSE_COUNT = 42;
	
	static void crossover(const Schedule&, const Schedule&, Schedule&, Schedule&);

	__int8 operator[](int);

	void mutate();
	std::string test();
	std::string dataString();
private:
	std::bitset<COURSE_COUNT * 3> data; 
};

