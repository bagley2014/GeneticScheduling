#include "Schedule.h"
#include <random>
#include <iostream>
#include <set>
using std::bitset; using std::set;

//random stuff
std::random_device rd;     
std::mt19937_64 eng(rd()); 
std::uniform_int_distribution<unsigned long long> distr;

Schedule::Schedule()
{
	data = bitset<COURSE_COUNT * 3>(distr(eng)) |
		(bitset<COURSE_COUNT * 3>(distr(eng)) << 64) |
		(bitset<COURSE_COUNT * 3>(distr(eng)) << 128);
}

Schedule::Schedule(int i){
	if (i) data.set();
	else data.reset();
}

void Schedule::crossover(const Schedule& s1, const Schedule& s2, Schedule& child1, Schedule& child2)
{
	const int bitCount = s1.data.size();

	int pts[2] = { distr(eng) % bitCount, distr(eng) % bitCount };
	std::sort(pts, pts + 2);
	
	int rightShift = bitCount - pts[0];
	int leftShift = bitCount - pts[1];

	auto leftPart = (s1.data >> rightShift) << rightShift;
	auto middlePart = ((s2.data << pts[0]) >> (pts[0] + leftShift)) << leftShift;
	auto rightPart = (s1.data << pts[1]) >> pts[1];

	child1 = Schedule(0);
	child1.data |= leftPart | middlePart | rightPart;
	child1.mutate();

	leftPart = (s2.data >> rightShift) << rightShift;
	middlePart = ((s1.data << pts[0]) >> (pts[0] + leftShift)) << leftShift;
	rightPart = (s2.data << pts[1]) >> pts[1];

	child2 = Schedule(0);
	child2.data |= leftPart | middlePart | rightPart;	
	child2.mutate();
}

__int8 Schedule::operator[](int i)
{
	if (i > 44) throw std::invalid_argument("Index out of range");
	return data[3 * i] * 4 + data[3 * i + 1] * 2 + data[3 * i + 2] * 1 + 1;
}

void Schedule::mutate()
{
	auto chance = distr(eng) % 1000;
	if (chance < data.size()) data[chance].flip();
}

std::string Schedule::test()
{
	Course * c170 = NULL;
	getCourseData(c170);
	Schedule sch;
	return c170[COURSE_COUNT-1].name + ": " + std::to_string((int)sch[COURSE_COUNT-1]);
}

std::string Schedule::dataString(){ return data.to_string(); }


