#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	setlocale(0, "");

	cout << "\nПрограмма Функции" << endl;
	cout << "[ 1 ] Очищение консоли" << endl;
	cout << "[ 2 ] Изменить цвет фона" << endl;
	cout << "[ 3 ] Изменить цвет текста" << endl;
	cout << "[ 4 ] Вывод размер типа данных INT" << endl;
	cout << "[ 5 ] Вывод размер типа данных CHAR" << endl;
	cout << "[ 6 ] Вывод размер типа данных DOUBLE" << endl;
	cout << "[ 7 ] Вывод размер типа данных FLOAT" << endl;
	cout << "[ 8 ] Вывод размер типа данных BOOL" << endl;
	cout << "[ 9 ] Вывод сообщения Привет, я функция" << endl;
	cout << "[ 10 ] Вывод квадрата 5х5" << endl;

	cout << "Введите цифру: ";
   
	int menu;
	cin >> menu;

	if (menu == 1) {

		cout << "Очищение консоли..." << endl;
		Sleep(2000);
		system("cls");
		Sleep(2000);
		main();
	    }

	else if (menu == 2) {
		cout << "Происходит изменение цвета фона..." << endl;
		Sleep(2000);
		system("color d0");
		system("cls");
		Sleep(2000);
		main();

	  } 
	
	else if (menu == 3) {


		cout << "Происходит изменение цвета текста..." << endl;
		Sleep(2000);
		system("cls");
		system("color 0c");
		cout << "Цвет изменён" << endl;
		Sleep(2000);
		system("cls");
		Sleep(2000);
		main();



	}

	else if (menu == 4) {
		Sleep(2000);
		cout << "\nРазмер типа данных INT: 4" << endl << endl;
		Sleep(2000);
		main();


	}














}

