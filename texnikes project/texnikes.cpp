//#include "texnikes.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

int** create2Dtbl(int noRows, int noClmns) {
	int** aray = new int*[noRows];
	for (int i = 0; i < noRows; i++) {
		aray[i] = new int[noClmns];

	}
	return aray;
}


void delete2Dtbl(int** aray, int noClmns) {
	for (int i = 0; i<noClmns; i++) delete[] aray[i];
	delete[] aray;
}


void ptr2Dtbl(int** aray, int noRows, int noClmns) {
	for (int i = 0; i < noRows; i++) {
		for (int j = 0; j < noClmns; j++) {
			cout << aray[i][j];
		}
		cout << endl;
	}
	cout << endl;

}


void set2Dtbl(int** aray, int row, int clm, int value) {
	aray[row][clm] = value;
}