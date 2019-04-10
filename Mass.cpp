#include "Mass.h"
#include <iostream>

using namespace std;


Mass::Mass()
{
	for (int i = 0; i < N; i++) {
		cout << "¬ведите mass[" << i << "]= ";
		cin >> massive[i];
	}
}


Mass::~Mass()
{
	delete[] massive;
}

void Mass::show() {
	cout << "ћассив в данный момент:" << endl;
	for (int i = 0; i < N; i++) {
		cout << "Ёлемент массива " << i << " = " << massive[i] << endl;
	}
}

int Mass::find_min(){
	int min=massive[0];
	for (int i = 1; i < N; i++) {
		if (abs(massive[i]) < min) {
			min = massive[i];
		}
	}
	return min;
}

int Mass::sum_after_zero() {
	int sum = 0;
	int flag = 0;
	for (int i = 0; i < N; i++) {
		if (massive[i] == 0) {
			flag = 1;
		}
		if (flag == 1) {
			sum += massive[i];
		}
	}
	return sum;
}

void Mass:: update_mass(){
	int * m = new int[N];
	int i = 0;
		for (int j = 0, i; j < N; i++, j += 2) {
			m[i] = massive[j];
		}
		for (int j = 1, i; j < N; i++, j += 2) {
			m[i] = massive[j];
		}
		massive = m;
		delete[]m;
}