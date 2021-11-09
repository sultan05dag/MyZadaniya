#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");

	cout << "Welcome to the MyCalculator" << endl;
	cout << "\nВведите первое значение: ";
    double num1;
	cin >> num1;
	cout << "\nВведите второе значение: ";
	double num2;
	cin >> num2;
	cout << "\n\nСписок операций: \n\n[1] Вычитание \n[2] Сложение \n[3] Умножение \n[4] Деление" << endl;

	cout << "Выберите операцию: ";

	int menu;
	cin >> menu;

	cout << "Результат: ";
	
	int result;
	cin >> result;



	switch (menu)  {

	case 1: return num1 - num2;
	case 2: return num1 + num2;
	case 3: return num1 * num2;
	case 4: return num1 / num2;

		break;



		}
	






	default:

		cout << "Ты написал что-то не то. Исправляй.";


		break;
	}




	return 0;
}