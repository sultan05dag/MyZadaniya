#include <iostream>
#include <Windows.h>
using namespace std;


int main() {

	setlocale(0, "");

	cout << "Welcome to the Tartoun's Calculator" << endl;
	cout << "Список арифметических операторов: \n[1] Сложение\n[2] Вычитание \n[3] Умножение\n[4] Деление\n" << endl;
	cout << "[ZZZ] Выберите арифметический оператор: ";
	char resultat;
	cin >> resultat;
	cout << "[ZZZ] Введите первое число: ";
	float znachenie1;
	cin >> znachenie1;
	cout << "[ZZZ] Введите второе число: ";
	float znachenie2;
	cin >> znachenie2;
    
	if (resultat == '1' ) {

		cout << "\nОтвет: " << znachenie1 + znachenie2;
		Sleep(2000);
		system("cls");
			main();


	}

	else if (resultat == '2') {

		cout << "\nОтвет: " << znachenie1 - znachenie2;
		Sleep(4000);
		system("cls");
		main();


	}

	else if (resultat == '3') {

		cout << "\nОтвет: " << znachenie1 * znachenie2;
		Sleep(4000);
		system("cls");
		main();


	}

	else if (resultat == '4') {

		cout << "\nОтвет: " << znachenie1 / znachenie2;
		Sleep(4000);
		system("cls");
		main();


	}
	else {
		system("cls");
		cout << "[-] Такое действие отсутствует";
		Sleep(4000);
		system("cls");
		main();


	}



	return 0;
}