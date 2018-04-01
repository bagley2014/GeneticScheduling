#pragma once
#include <bitset>
#include "Course.h"

class Schedule
{
public:
	Schedule();
	~Schedule();
	static const int COURSE_COUNT = 42;
	static void getCourseData(Course*&);

	__int8 operator[](int);

	std::string test();
private:
	std::bitset<COURSE_COUNT * 3> data; 
};

