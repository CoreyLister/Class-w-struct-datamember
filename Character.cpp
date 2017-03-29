using namespace std;

#include "Character.h"

int Character::getAge() {
	return CharInfo.age;
}

void Character::setAge(int ageNew) {
	CharInfo.age = ageNew;
}

string Character::getNameFirst() {
	return CharInfo.nameFirst;
}

string Character::getNameSecond() {
	return CharInfo.nameSecond;
}

string Character::getRace() {
	return CharInfo.race;
}

//Not sure how to write this constructor implementation.
Character::Character(Information Info) {
	CharInfo = Info;
}

Character::~Character() {

}

