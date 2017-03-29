#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
private:
	int age;
	string nameFirst;
	string nameSecond;
	string race;
public:
	int getAge();
	void setAge(int ageNew);
	string getNameFirst();
	string getNameSecond();
	string getRace();
	Character(Information starting);
	~Character();
};

	struct Information {
		int age;
		string nameFirst;
		string nameSecond;
		string race;
	};

#endif

/*
class Character {
private:
	int age;
	string nameFirst;
	string nameSecond;
	string race;
public:
	int getAge();
	void setAge(int ageNew);
	string getNameFirst();
	string getNameSecond();
	string getRace();
	Character(int _age, string _nameFirst, string _nameSecond, string _race);
	~Character();
};
*/