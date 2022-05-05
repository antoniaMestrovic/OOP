#include <iostream>
#include "Counter.h"
#include <string>

using namespace std;

void Counter::addAnAnimal(Animal* animal) {
	totalNumOfLegs += animal->getNumOfLegs();
	cout << "Dodana zivotinja je: " << animal->getType() << endl;
	cout << "Broj nogu je: " << animal->getNumOfLegs() << endl;
}

void Counter::getNumOfLegs() {
	
	cout << "Ukupan broj nogu je: " << totalNumOfLegs << endl;
}