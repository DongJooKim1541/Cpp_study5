#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
#define MAX 10
#include "Mine.h"

void Mine::field() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (prev_row == i && prev_col == j) {
				cout << "¡Ù";
			}
			else {
				cout << "¡à";
			}
		}
		cout << endl;
	}
}
void Mine::set_mines() {
	int arr1[10], arr2[10];
	srand(time(NULL));
	
}
void Mine::move() {
	while (true) {
		system("cls");
		field();
		cout << "움직이고 싶은 좌표 (x, y)" << endl;
		int x, y;
		cin >> x >> y;
		if (x >= 0 && x < MAX && y >= 0 && y < MAX) {
			prev_col = x, prev_row = y;
			cout << "x: " << x << "y: " << y << endl;
		}
	}
}
void Mine::find_mines() {
	
}
Mine::Mine() {
	prev_row = 0;
	prev_col = 0;
}
void Mine::start_mine() {
	move();
}
Mine::~Mine() {
}
