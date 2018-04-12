#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Person {
public:
	int legs = 2, arms = 2;
	string hair, name;

	Person() { 
		setName();
		setHair(); 
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

	cout << bob.name << " has " << bob.legs << " legs & " << bob.arms << " arms and their hair color is " <<bob.hair << "\n";

	cout << sue.name << " has " << sue.legs << " legs & " << sue.arms << " arms and their hair color is " << sue.hair << "\n";

	cin >> input;

	return 0;
}

