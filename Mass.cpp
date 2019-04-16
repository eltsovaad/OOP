#include "Mass.h"
#include "My_Error.h"
#include <iostream>

using namespace std;


Mass::Mass()
{
	for (int i = 0; i < N; i++) {
		cout << "Введите mass[" << i << "]= ";
		cin >> massive[i];
	}
}


Mass::~Mass()
{
	delete[] massive;
}

void Mass::show() {
	cout << "Массив в данный момент:" << endl;
	try {
		for (int i = 0; i < N; i++) {
			if (i > N) { 
				throw(My_Error());
			}
			cout << "Элемент массива " << i << " = " << massive[i] << endl;
		}
	}
	catch (My_Error) {
		cout << "Выход за границы массива" << endl;
	}
}

int Mass::find_min(){
	int min=massive[0];
	try {
		for (int i = 1; i < N; i++) {
			if (i > N) {
				throw(My_Error());
			}
			if (abs(massive[i]) < min) {
				min = massive[i];
			}
		}
		return min;
	}
	catch (My_Error) {
		cout << "Выход за границы массива" << endl;
	}
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