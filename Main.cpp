#include <iostream>
#include <string>

#include "Character.h"

using namespace std;

int main() {
	Information IrinaInfo;
	IrinaInfo.age = 26;
	IrinaInfo.nameFirst = "Irina";
	IrinaInfo.nameSecond = "Lister";
	IrinaInfo.race = "Romanian";
	Character Irina(IrinaInfo);
}

/*
int main() {

	Character Irina(29, "Irina", "Lister", "Romanian");

	int age = Irina.getAge();
	string nameFirst = Irina.getNameFirst();
	string nameSecond = Irina.getNameSecond();
	string race = Irina.getRace();


	cout << nameFirst << " " << nameSecond << endl
		<< "Age: " << age << endl
		<< "Race: " << race << endl;

	int x;
	cin >> x;

}
*/