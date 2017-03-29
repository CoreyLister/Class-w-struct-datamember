using namespace std;

#include "Character.h"

int Information::getAge() {
	return age;
}

void Information::setAge(int ageNew) {
	age = ageNew;
}

string Information::getNameFirst() {
	return nameFirst;
}

string Information::getNameSecond() {
	return nameSecond;
}

string Information::getRace() {
	return race;
}

//Not sure how to write this constructor implementation.
Character::Character(Information(int _age, string _nameFirst, string _nameSecond, string _race)) {
	Information age = _age;
	Information nameFirst = _nameFirst;
	Information nameSecond = _nameSecond;
	Information race = _race;
}

Character::~Character() {

}

