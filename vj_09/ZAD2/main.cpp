#include "Counter.h";
#include "Tarantula.h";
#include "Zohar.h";
#include "Vrabac.h";
#include "Tigar.h"

using namespace std;

int main() {

	Zohar an1;
	Tarantula an2;
	Vrabac an3;
	Tigar an4;
	Counter count;

	count.addAnAnimal(&an1);
	count.addAnAnimal(&an2);
	count.addAnAnimal(&an3);
	count.addAnAnimal(&an4);
	count.getNumOfLegs();
	return 0;
}