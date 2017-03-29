#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
private:
	Information age;
	Information nameFirst;
	Information nameSecond;
	Information race;
public:
	//need constructor but not sure how to write it
	~Character();
};

	struct Information {
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
		//Below construct has no link with class and therefore is likely incorrect.
		Information(int _age, string _nameFirst, string _nameSecond, string _race);
		~Information();
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