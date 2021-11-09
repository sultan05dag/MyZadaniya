#include <iostream>
using namespace std;
#define clear system ("cls")
#include <Windows.h>

int main() {

	setlocale(0, "");

	cout << "Welcome to the Tartoun's Calculator" << endl;
	cout << "[1] Сложение\n[2] Вычитание\n[3] Деление\n[4] Умножение" << endl << endl;
	cout << "Выберите арифметический оператор: ";
	int menu;
	cin >> menu;

	clear;
	if (menu == 1) {

		cout << "Введите значения:";


	}
	    int reshenie;
	double znachenie1;
	double znachenie2;
	cin >> znachenie1;
	cin >> znachenie2;

	if (reshenie = znachenie1 + znachenie2) {

		cout << reshenie << endl;
		Sleep(2000);
		clear;
		main();


	   }
 

		

}

