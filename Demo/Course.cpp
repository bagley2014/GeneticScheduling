#include "Course.h"

void getCourseDataX(Course* & cp)
{
	delete cp;
	cp = new Course[42];

	cp[0] = Xbnew113();
	cp[1] = Xbnew313();
	cp[2] = Xbold203();
	cp[3] = Xbold207();
	cp[4] = Xbdoc356();
	cp[5] = Xbfam338();
	cp[6] = Xphil253();

	cp[7] = Xcomp170();
	cp[8] = Xcomp245();
	cp[9] = Xcomp250();
	cp[10] = Xcomp268();
	cp[11] = Xcomp301();
	cp[12] = Xcomp310();
	cp[13] = Xcomp311();
	cp[14] = Xcomp336();
	cp[15] = Xcomp345();
	cp[16] = Xcomp349();
	cp[17] = Xcomp430();
	cp[18] = Xcomp431();
	cp[19] = Xcomp439();
	cp[20] = Xcomp440();
	cp[21] = Xcomp475();

	cp[22] = Xhnrs201();
	cp[23] = Xhnrs202();
	cp[24] = Xhnrs203();
	cp[25] = Xhnrs204();
	cp[26] = Xhnrs205();
	cp[27] = Xhnrs459();

	cp[28] = Xmath260();
	cp[29] = Xmath301();
	cp[30] = Xmath313();
	cp[31] = Xmath318();
	cp[32] = Xmath323();
	cp[33] = Xmath331();
	cp[34] = Xmath351();
	cp[35] = Xmath443();
	cp[36] = Xmath444();

	cp[37] = Xfr100();
	cp[38] = Xhum201();
	cp[39] = Xhum273();
	cp[40] = Xkins101();
	cp[41] = Xkins119();
}

void getCourseData(Course* & cp)
{
	delete cp;
	cp = new Course[42];

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
	cp[24] = hnrs203();
	cp[25] = hnrs204();
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


Course comp170() {
	Course result;
	result.name = "COMP 170";
	result.hours = 5;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 50;
	return result;
}

Course hnrs201() {
	Course result;
	result.name = "HNRS 201";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 30;
	return result;
}

Course hnrs202() {
	Course result;
	result.name = "HNRS 202";
	result.hours = 2;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 35;
	return result;
}

Course math313() {
	Course result;
	result.name = "MATH 313";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 90;
	return result;
}

Course bnew113() {
	Course result;
	result.name = "BNEW 113";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 15;
	return result;
}

Course comp245() {
	Course result;
	result.name = "COMP 245";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 30;
	result.prerequisites.insert(comp170());
	return result;
}

Course comp268() {
	Course result;
	result.name = "COMP 268";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 35;
	result.prerequisites.insert(comp170());
	return result;
}

Course hnrs204() {
	Course result;
	result.name = "HNRS 204";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 40;
	return result;
}

Course math318() {
	Course result;
	result.name = "MATH 318";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 30;
	return result;
}

Course bold203() {
	Course result;
	result.name = "BOLD 203";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 25;
	return result;
}

Course comp250() {
	Course result;
	result.name = "COMP 250";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 40;
	result.prerequisites.insert(comp170());
	return result;
}

Course comp345() {
	Course result;
	result.name = "COMP 345";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 45;
	result.prerequisites.insert(comp245());
	return result;
}

Course comp349() {
	Course result;
	result.name = "COMP 349";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 45;
	result.prerequisites.insert(comp245());
	return result;
}

Course math323() {
	Course result;
	result.name = "MATH 323";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 45;
	result.prerequisites.insert(math313());
	return result;
}

Course bnew313() {
	Course result;
	result.name = "BNEW 313";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 40;
	return result;
}

Course fr100() {
	Course result;
	result.name = "FR 100";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 20;
	return result;
}

Course hum201() {
	Course result;
	result.name = "HUM 201";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 30;
	return result;
}

Course hum273() {
	Course result;
	result.name = "HUM 273";
	result.hours = 4;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 40;
	return result;
}

Course kins119() {
	Course result;
	result.name = "KINS 119";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 10;
	return result;
}

Course bdoc356() {
	Course result;
	result.name = "BDOC 356";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 30;
	return result;
}

Course comp430() {
	Course result;
	result.name = "COMP 430";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 50;
	result.prerequisites.insert(comp245());
	return result;
}

Course hnrs205() {
	Course result;
	result.name = "HNRS 205";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 45;
	return result;
}

Course math301() {
	Course result;
	result.name = "MATH 301";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 30;
	return result;
}

Course bold207() {
	Course result;
	result.name = "BOLD 207";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 30;
	result.prerequisites.insert(comp245());
	return result;
}

Course comp301() {
	Course result;
	result.name = "COMP 301";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 65;
	result.prerequisites.insert(comp170());
	return result;
}

Course comp311() {
	Course result;
	result.name = "COMP 311";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 40;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp268());
	return result;
}

Course comp431() {
	Course result;
	result.name = "COMP 431";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 40;
	result.prerequisites.insert(comp250());
	result.prerequisites.insert(comp345());
	return result;
}

Course comp475() {
	Course result;
	result.name = "COMP 475";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 45;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp345());
	return result;
}

Course math260() {
	Course result;
	result.name = "MATH 260";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 40;
	return result;
}

Course bfam338() {
	Course result;
	result.name = "BFAM 338";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 20;
	return result;
}

Course comp310() {
	Course result;
	result.name = "COMP 310";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 45;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp268());
	return result;
}

Course hnrs203() {
	Course result;
	result.name = "HNRS 203";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 35;
	return result;
}

Course kins101() {
	Course result;
	result.name = "KINS 101";
	result.hours = 2;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 15;
	return result;
}

Course math443() {
	Course result;
	result.name = "MATH 443";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 20;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp268());
	return result;
}

Course phil253() {
	Course result;
	result.name = "PHIL 253";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 35;
	return result;
}

Course comp336() {
	Course result;
	result.name = "COMP 336";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 35;
	result.prerequisites.insert(comp245());
	return result;
}

Course comp439() {
	Course result;
	result.name = "COMP 439";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 40;
	return result;
}

Course comp440() {
	Course result;
	result.name = "COMP 440";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 60;
	return result;
}

Course hnrs459() {
	Course result;
	result.name = "HNRS 459";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 35;
	result.prerequisites.insert(phil253());
	return result;
}

Course math331() {
	Course result;
	result.name = "MATH 331";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 35;
	result.prerequisites.insert(math301());
	return result;
}

Course math351() {
	Course result;
	result.name = "MATH 351";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 45;
	return result;
}

Course math444() {
	Course result;
	result.name = "MATH 444";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 30;
	return result;
}

Course Xcomp170() {
	Course result;
	result.name = "COMP 170";
	result.hours = 5;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 70;
	return result;
}
	   
Course Xhnrs201() {
	Course result;
	result.name = "HNRS 201";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 40;
	return result;
}
	   
Course Xhnrs202() {
	Course result;
	result.name = "HNRS 202";
	result.hours = 2;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 60;
	return result;
}
	   
Course Xmath313() {
	Course result;
	result.name = "MATH 313";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 80;
	return result;
}
	   
Course Xbnew113() {
	Course result;
	result.name = "BNEW 113";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 25;
	return result;
}
	   
Course Xcomp245() {
	Course result;
	result.name = "COMP 245";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 60;
	result.prerequisites.insert(comp170());
	return result;
}
	   
Course Xcomp268() {
	Course result;
	result.name = "COMP 268";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 40;
	result.prerequisites.insert(comp170());
	return result;
}
	   
Course Xhnrs204() {
	Course result;
	result.name = "HNRS 204";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 30;
	return result;
}
	   
Course Xmath318() {
	Course result;
	result.name = "MATH 318";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 30;
	return result;
}
	   
Course Xbold203() {
	Course result;
	result.name = "BOLD 203";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 40;
	return result;
}
	   
Course Xcomp250() {
	Course result;
	result.name = "COMP 250";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 50;
	result.prerequisites.insert(comp170());
	return result;
}
	   
Course Xcomp345() {
	Course result;
	result.name = "COMP 345";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 75;
	result.prerequisites.insert(comp245());
	return result;
}
	   
Course Xcomp349() {
	Course result;
	result.name = "COMP 349";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 50;
	result.prerequisites.insert(comp245());
	return result;
}
	   
Course Xmath323() {
	Course result;
	result.name = "MATH 323";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 65;
	result.prerequisites.insert(math313());
	return result;
}
	   
Course Xbnew313() {
	Course result;
	result.name = "BNEW 313";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 40;
	return result;
}
	   
Course Xfr100() {
	Course result;
	result.name = "FR 100";
	result.hours = 2;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 60;
	return result;
}
	   
Course Xhum201() {
	Course result;
	result.name = "HUM 201";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 70;
	return result;
}
	   
Course Xhum273() {
	Course result;
	result.name = "HUM 273";
	result.hours = 4;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 95;
	return result;
}
	   
Course Xkins119() {
	Course result;
	result.name = "KINS 119";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 30;
	return result;
}
	   
Course Xbdoc356() {
	Course result;
	result.name = "BDOC 356";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 40;
	return result;
}
	   
Course Xcomp430() {
	Course result;
	result.name = "COMP 430";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 90;
	result.prerequisites.insert(comp245());
	return result;
}
	   
Course Xhnrs205() {
	Course result;
	result.name = "HNRS 205";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 60;
	return result;
}
	   
Course Xmath301() {
	Course result;
	result.name = "MATH 301";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 50;
	return result;
}
	   
Course Xbold207() {
	Course result;
	result.name = "BOLD 207";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 25;
	result.prerequisites.insert(comp245());
	return result;
}
	   
Course Xcomp301() {
	Course result;
	result.name = "COMP 301";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 60;
	result.prerequisites.insert(comp170());
	return result;
}
	   
Course Xcomp311() {
	Course result;
	result.name = "COMP 311";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 40;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp268());
	return result;
}
	   
Course Xcomp431() {
	Course result;
	result.name = "COMP 431";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 80;
	result.prerequisites.insert(comp250());
	result.prerequisites.insert(comp345());
	return result;
}
	   
Course Xcomp475() {
	Course result;
	result.name = "COMP 475";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 0;
	result.difficulty = 90;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp345());
	return result;
}
	   
Course Xmath260() {
	Course result;
	result.name = "MATH 260";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 40;
	return result;
}
	   
Course Xbfam338() {
	Course result;
	result.name = "BFAM 338";
	result.hours = 2;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 40;
	return result;
}
	   
Course Xcomp310() {
	Course result;
	result.name = "COMP 310";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 0;
	result.semester3 = 1;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 75;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp268());
	return result;
}
	   
Course Xhnrs203() {
	Course result;
	result.name = "HNRS 203";
	result.hours = 3;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 70;
	return result;
}
	   
Course Xkins101() {
	Course result;
	result.name = "KINS 101";
	result.hours = 2;
	result.semester1 = 1;
	result.semester2 = 1;
	result.semester3 = 1;
	result.semester4 = 1;
	result.semester5 = 1;
	result.semester6 = 1;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 40;
	return result;
}
	   
Course Xmath443() {
	Course result;
	result.name = "MATH 443";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 85;
	result.prerequisites.insert(comp245());
	result.prerequisites.insert(comp268());
	return result;
}
	   
Course Xphil253() {
	Course result;
	result.name = "PHIL 253";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 1;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 0;
	result.difficulty = 55;
	return result;
}
	   
Course Xcomp336() {
	Course result;
	result.name = "COMP 336";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 50;
	result.prerequisites.insert(comp245());
	return result;
}
	   
Course Xcomp439() {
	Course result;
	result.name = "COMP 439";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 110;
	return result;
}
	   
Course Xcomp440() {
	Course result;
	result.name = "COMP 440";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 100;
	return result;
}
	   
Course Xhnrs459() {
	Course result;
	result.name = "HNRS 459";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 1;
	result.semester8 = 1;
	result.difficulty = 35;
	result.prerequisites.insert(phil253());
	return result;
}
	   
Course Xmath331() {
	Course result;
	result.name = "MATH 331";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 75;
	result.prerequisites.insert(math301());
	return result;
}
	   
Course Xmath351() {
	Course result;
	result.name = "MATH 351";
	result.hours = 3;
	result.semester1 = 0;
	result.semester2 = 1;
	result.semester3 = 0;
	result.semester4 = 1;
	result.semester5 = 0;
	result.semester6 = 1;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 80;
	return result;
}
	   
Course Xmath444() {
	Course result;
	result.name = "MATH 444";
	result.hours = 1;
	result.semester1 = 0;
	result.semester2 = 0;
	result.semester3 = 0;
	result.semester4 = 0;
	result.semester5 = 0;
	result.semester6 = 0;
	result.semester7 = 0;
	result.semester8 = 1;
	result.difficulty = 100;
	return result;
}
