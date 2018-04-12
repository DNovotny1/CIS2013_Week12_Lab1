#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Human {
private:
	int legs, arms;
	
public:
	string hair, name;

	Human() { 
		setName();
		setHair(); 
		legs = 2;
		arms = 2;

	}

	int getLegs() {
		return legs;
	}

	int getArms() {
		return arms;
	}
	void setLegs() {
		cout << "How many legs does this person have? ";
		cin >> legs;
	}


	void setName() {
		cout << "What is the persons name? ";
		cin >> name;
	}
	
	void setHair() {
		cout << "What hair color do you want? ";
		cin >> hair;
	}


};

class Man: public Human {
public:

	bool hasEgo = true;
	string pee = "standing";


};

int main() {
	string input;
	Man bob;
	Human sue;
	//bob.setHair();

	

	cout << bob.name << " has " << bob.getLegs() << " legs & " << bob.getArms() << " arms and their hair color is " <<bob.hair << "\n";

	cout << bob.name << "has an ego?" << bob.hasEgo << endl;

	sue.setLegs();

	cout << sue.name << " has " << sue.getLegs() << " legs & " << sue.getArms() << " arms and their hair color is " << sue.hair << "\n";

	cin >> input;

	return 0;
}

