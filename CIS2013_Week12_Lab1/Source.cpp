#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Person {
private:
	int legs, arms;
	
public:
	string hair, name;

	Person() { 
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

	void setName() {
		cout << "What is the persons name? ";
		cin >> name;
	}
	
	void setHair() {
		cout << "What hair color do you want? ";
		cin >> hair;
	}


};

int main() {
	string input;
	Person bob;
	Person sue;
	//bob.setHair();

	cout << bob.name << " has " << bob.getLegs() << " legs & " << bob.getArms() << " arms and their hair color is " <<bob.hair << "\n";

	cout << sue.name << " has " << sue.getLegs() << " legs & " << sue.getArms() << " arms and their hair color is " << sue.hair << "\n";

	cin >> input;

	return 0;
}

