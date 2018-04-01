#include "Schedule.h"
#include<iostream>
const int COURSE_COUNT = Schedule::COURSE_COUNT;


int main() {

	for (int i = 0; i < 5; i++) {
		std::cout << Schedule().test() << std::endl;
	}

	return 0;
}