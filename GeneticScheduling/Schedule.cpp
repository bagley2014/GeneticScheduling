#include "Schedule.h"
#include <random>
//#include <limits>
using std::bitset;
std::random_device rd;     //Get a random seed from the OS entropy device, or whatever
std::mt19937_64 eng(rd()); //Use the 64-bit Mersenne Twister 19937 generator
						   //and seed it with entropy.

						   //Define the distribution, by default it goes from 0 to MAX(unsigned long long)
						   //or what have you.
std::uniform_int_distribution<unsigned long long> distr;


Schedule::Schedule()
{
	data = bitset<COURSE_COUNT * 3>(distr(eng)) |
		(bitset<COURSE_COUNT * 3>(distr(eng)) << 64) |
		(bitset<COURSE_COUNT * 3>(distr(eng)) << 128);
}


Schedule::~Schedule()
{
}


void Schedule::getCourseData(Course* & cp)
{
	delete cp;
	cp = new Course[COURSE_COUNT];

	cp[0] = bnew113();
	cp[1] = bnew313();
	cp[2] = bold203();
	cp[3] = bold207();
	cp[4] = bdoc356();
	cp[5] = bfam338();
	cp[6] = phil253();

	cp[7] = comp170();
	cp[8] = comp245();
	cp[9] = comp250();
	cp[10] = comp268();
	cp[11] = comp301();
	cp[12] = comp310();
	cp[13] = comp311();
	cp[14] = comp336();
	cp[15] = comp345();
	cp[16] = comp349();
	cp[17] = comp430();
	cp[18] = comp431();
	cp[19] = comp439();
	cp[20] = comp440();
	cp[21] = comp475();

	cp[22] = hnrs201();
	cp[23] = hnrs202();
	cp[24] = hnrs204();
	cp[25] = hnrs203();
	cp[26] = hnrs205();
	cp[27] = hnrs459();

	cp[28] = math260();
	cp[29] = math301();
	cp[30] = math313();
	cp[31] = math318();
	cp[32] = math323();
	cp[33] = math331();
	cp[34] = math351();
	cp[35] = math443();
	cp[36] = math444();

	cp[37] = fr100();
	cp[38] = hum201();
	cp[39] = hum273();
	cp[40] = kins101();
	cp[41] = kins119();
}

__int8 Schedule::operator[](int i)
{
	if (i > 44) throw std::invalid_argument("Index out of range");
	return data[3 * i] * 4 + data[3 * i + 1] * 2 + data[3 * i + 2] * 1;
}

std::string Schedule::test()
{
	Course * c170 = NULL;
	getCourseData(c170);
	Schedule sch;
	return c170[COURSE_COUNT-1].name + ": " + std::to_string((int)sch[COURSE_COUNT-1]);
}
