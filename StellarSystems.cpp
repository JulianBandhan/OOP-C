#include <iostream>
#include <list>
#include<vector>
#include<string>
using namespace std;

class System {
private:
		string Name;
		list<string> Star;
		int Nplanets;
		list<string> PlanetNames;


public:
		System(string name, list<string> star) {
			Name = name;
			Star = star;
		}

		void Planet(string NewPlanet) {
			PlanetNames.push_back(NewPlanet);
		}


		void print() {
			cout << "System Name: " << Name << endl;
			cout << "Star : ";
			for (string sname : Star) {
				cout << sname << endl;
			}
			Nplanets = PlanetNames.size();
			cout << "Number of Planets: " << Nplanets << endl;
			cout << "Planets: " << endl;
			for (string pnames : PlanetNames) {
				cout << pnames << endl;
			}
			cout << endl;
	}
};

void NewSystem() {
	string sysname, str;
	list<string> strname;
	cout << "Enter System Name: ";
	cin >> sysname;

	int choice,whiledo = 0;
	while (whiledo == 0) {
		cout << endl;
		cout << "1. Enter star name" << endl;
		cout << "2. Exit " << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "Enter Star Name; ";
			cin >> str;
			strname.push_back(str);
		}
		else {
			whiledo = 1;
		}
	}
	cout << endl; 

	System sys(sysname, strname);
	string planame;
	int choice2, whiledo2 = 0;
	while (whiledo2 == 0) {
		cout << endl;
		cout << "1. Enter Planet Name " << endl;
		cout << "2. Exit " << endl;
		cin >> choice2;
		if (choice2 == 1) {
			cout << "Enter Planet Name: ";
			cin >> planame;
			sys.Planet(planame);
		}
		else {
			whiledo2 = 1;
		}
	}
	cout << endl;

	system("pause>0");

	sys.print();
}

int main() {
	int whatdo = 0;

	
	cout << "1. System Log" << endl;
	cout << "2. Exit" << endl;
	cout << "What would you like to do?" << endl;
	cin >> whatdo;

	if (whatdo == 1) {
		NewSystem();
	}
	else {
		cout << "Aite get outta here" << endl;
	}



	system("pause>0");
}