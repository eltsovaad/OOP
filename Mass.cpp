#include "Mass.h"
#include "My_Error.h"
#include <iostream>

using namespace std;


Mass::Mass()
{
	cout << "������� ���������� ��������� �������: ";
	cin >> N;
	massive = new int[N];
	for (int i = 0; i < N; i++) {
		cout << "������� mass[" << i << "]= ";
		cin >> massive[i];
	}
}


Mass::~Mass()
{
	delete[] massive;
	massive = NULL;
}

void Mass::show() {
	cout << "������ � ������ ������:" << endl;
	try {
		for (int i = 0; i < N; i++) {
			if (i > N) { 
				throw(My_Error());
			}
			cout << "������� ������� " << i << " = " << massive[i] << endl;
		}
	}
	catch (My_Error) {
		cout << "����� �� ������� �������" << endl;
		abort();
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
		cout << "����� �� ������� �������" << endl;
		abort();
	}
}

int Mass::sum_after_zero() {
	int sum = 0;
	int flag = 0;
	try {
		for (int i = 0; i < N; i++) {
			if (i >= N) {
				throw(My_Error());
			}
			if (massive[i] == 0) {
				flag = 1;
			}
			if (flag == 1) {
				sum += massive[i];
			}
		}
		if (flag == 0) {
			cout << "������� ��������� ���" << endl;
		}
		return sum;
	}
	catch (My_Error) {
		cout << "����� �� ������� �������" << endl;
	}
}

void Mass:: update_mass(){
	int * m = new int[N];
	int i = 0;
	try {
		for (int j = 0; j < N; i++, j += 2) {
			if ((i >= N)||(j>=N)) {
				throw(My_Error());
			}
			m[i] = massive[j];
		}
		for (int j = 1; j < N; i++, j += 2) {
			if ((i >= N)||(j>=N)) {
				throw(My_Error());
			}
			m[i] = massive[j];
		}
		for (int j = 0; j < N; j++) {
			massive[j] = m[j];
		}
		delete[]m;
		m = NULL;
	}
	catch (My_Error) {
		cout << "����� �� ������� �������" << endl;
		abort();
	}
}