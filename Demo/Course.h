#pragma once
#include<string>
#include<set>
using std::string; using std::set;

struct Course
{
	unsigned int difficulty : 21;
	unsigned int hours : 3;
	unsigned int semester1 : 1;
	unsigned int semester2 : 1;
	unsigned int semester3 : 1;
	unsigned int semester4 : 1;
	unsigned int semester5 : 1;
	unsigned int semester6 : 1;
	unsigned int semester7 : 1;
	unsigned int semester8 : 1;
	string name;
	set<Course> prerequisites;

	Course() {
		prerequisites = set<Course>();
	}

	bool operator<(const Course& c) const {
		return this->name < c.name;
	}
};

void getCourseData(Course*&);
void getCourseDataX(Course*&);

Course bnew113();
Course bnew313();
Course bold203();
Course bold207();
Course bdoc356();
Course bfam338();
Course phil253();

Course comp170();
Course comp245();
Course comp250();
Course comp268();
Course comp301();
Course comp310();
Course comp311();
Course comp336();
Course comp345();
Course comp349();
Course comp430();
Course comp431();
Course comp439();
Course comp440();
Course comp475();

Course hnrs201();
Course hnrs202();
Course hnrs203();
Course hnrs204();
Course hnrs205();
Course hnrs459();

Course math260();
Course math301();
Course math313();
Course math318();
Course math323();
Course math331();
Course math351();
Course math443();
Course math444();

Course fr100();
Course hum201();
Course hum273();
Course kins101();
Course kins119();

Course Xbnew113();
Course Xbnew313();
Course Xbold203();
Course Xbold207();
Course Xbdoc356();
Course Xbfam338();
Course Xphil253();
	   
Course Xcomp170();
Course Xcomp245();
Course Xcomp250();
Course Xcomp268();
Course Xcomp301();
Course Xcomp310();
Course Xcomp311();
Course Xcomp336();
Course Xcomp345();
Course Xcomp349();
Course Xcomp430();
Course Xcomp431();
Course Xcomp439();
Course Xcomp440();
Course Xcomp475();
	   
Course Xhnrs201();
Course Xhnrs202();
Course Xhnrs203();
Course Xhnrs204();
Course Xhnrs205();
Course Xhnrs459();
	   
Course Xmath260();
Course Xmath301();
Course Xmath313();
Course Xmath318();
Course Xmath323();
Course Xmath331();
Course Xmath351();
Course Xmath443();
Course Xmath444();
	   
Course Xfr100();
Course Xhum201();
Course Xhum273();
Course Xkins101();
Course Xkins119();