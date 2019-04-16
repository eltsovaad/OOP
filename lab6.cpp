#include "Mass.h"
#include "My_Error.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	Mass m;
	int a = m.find_min();
	cout << "Минимальный элемент в массиве: " << a << endl;
	a = m.sum_after_zero();
	if (a != 0) {
		cout << "Сумма элементов после нуля: " << a << endl;
	}
	m.update_mass();
	cout << "Сортировка массива.." <<endl;
	m.show();
	/*_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDOUT);
	_CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();*/
	system("pause");
	return 0;
}