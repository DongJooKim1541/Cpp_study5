#include <iostream>
#include "Mine.h"
#include "Fortress.h"
#include "Star.h"
using namespace std;
int main() {
	cout << "1. 지뢰찾기	2. 포트리스(짭)	3.별의 모험" << endl;
	int choice;
	cin >> choice;
	Mine m;
	switch (choice) {
		case 1: {
			Mine m;
		}
			m.start_mine();
			break;
		case 2: {
			Fortress f;
		}
			break;
		case 3: {
			Star s;
		}
			break;
		default:
			break;
	}
	return 0;
}