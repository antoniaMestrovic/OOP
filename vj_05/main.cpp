#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Point.hpp"
#include "Weapon.hpp"
#include "Target.hpp"

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int min = -30;
	int max = 30;
	
	int targetNum=0;
		cout << "Enter the number of targets to generate: ";
		cin >> targetNum;

	Target* targets = new Target[targetNum];
	Point bottomLeft, upperRight;
	for (int i = 0; i < targetNum; i++) {
		targets[i].bottomLeft.inRandomRange(min, max);
		targets[i].upperRight.inRandomRange(min, max);
		while (targets[i].upperRight.getZ() <= targets[i].bottomLeft.getZ())
			targets[i].upperRight.inRandomRange(min, max);
	}

	// enter the number of bullets for rifle
	int capacity = 0;
		cout << endl <<"Enter the bullet capacity for your rifle: ";
		cin >> capacity;
	
	Point rifle_Pos;
	rifle_Pos.inRandomRange(min, max);
	Weapon rifle(rifle_Pos, capacity);
	cout << "Rifle is positioned at: ";
	riflePos.print();

	rifle.reload();

	// find out how many targets are hit
	int hitTargets = 0;
	while (!rifle.is_empty()) {
		rifle.shoot();
		for (int i = 0; i < targetNum; i++) {
			if ((rifle.position.getZ() >= targets[i].bottomLeft.getZ()) && (rifle.position.getZ() <= targets[i].upperRight.getZ()))
				targets[i].hitStatus(true);
		}
	}
	for (int i = 0; i < targetNum; i++)
		if (targets[i].gotHit())
			hitTargets++;
	cout << endl << hitTargets << " targets were hit (" << rifle.get_capacity() << " bullets)." << endl;

	delete[] targets;
	return 0;
}