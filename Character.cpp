using namespace std;

#include "Character.h"

int Character::getAge() {
	return age;
}

void Character::setAge(int ageNew) {
	age = ageNew;
}

string Character::getNameFirst() {
	return nameFirst;
}

string Character::getNameSecond() {
	return nameSecond;
}

string Character::getRace() {
	return race;
}

//Not sure how to write this constructor implementation.
Character::Character(Information Info) {
	age = Info.age;
	nameFirst = Info.nameFirst;
	nameSecond = Info.nameSecond;
	race = Info.race;
}

Character::~Character() {

}

