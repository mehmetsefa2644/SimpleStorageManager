#include "Record.h"

using namespace std;

Record::Record() {
	Type type;
	this->id = 0;
	strcpy_s(F1, "*");
	strcpy_s(F2, "*");
	strcpy_s(F3, "*");
	strcpy_s(F4, "*");
	strcpy_s(F5, "*");
}

Record::Record(Type type, int id, char *f1, char *f2, char *f3,
	char *f4, char *f5) {
	this->type = type;
	this->id = id;
	strcpy_s(F1, f1);
	strcpy_s(F2, f2);
	strcpy_s(F3, f3);
	strcpy_s(F4, f4);
	strcpy_s(F5, f5);
}

int Record::getId() {
	return id;
}

char* Record::getF1() {
	return F1;
}
char* Record::getF2() {
	return F2;
}
char* Record::getF3() {
	return F3;
}
char* Record::getF4() {
	return F4;
}
char* Record::getF5() {
	return F5;
}

Type Record::getType() {
	return type;
}