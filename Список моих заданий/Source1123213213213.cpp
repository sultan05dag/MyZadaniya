#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	setlocale(0, "");

	cout << "��������� �������:\n" << endl;
	cout << "[ 1 ] �������� �������" << endl;
	cout << "[ 2 ] �������� ���� ����" << endl;
	cout << "[ 3 ] �������� ���� ������" << endl;
	cout << "[ 4 ] ����� ������ ���� ������ INT" << endl;
	cout << "[ 5 ] ����� ������ ���� ������ CHAR" << endl;
	cout << "[ 6 ] ����� ������ ���� ������ DOUBLE" << endl;
	cout << "[ 7 ] ����� ������ ���� ������ FLOAT" << endl;
	cout << "[ 8 ] ����� ������ ���� ������ BOOL" << endl;
	cout << "[ 9 ] ����� ��������� ������, � �������" << endl;
	cout << "[ 10 ] ����� �������� 5�5" << endl;

	cout << "\n[-] ������� �����: ";

	int menu;
	cin >> menu;

	if (menu == 1) {

		cout << "[-] �������� �������..." << endl;
		Sleep(2000);
		system("cls");
		Sleep(2000);
		main();
	}

	else if (menu == 2) {
		cout << "[-] ���������� ��������� ����� ����..." << endl;
		Sleep(2000);
		system("color d0");
		system("cls");
		Sleep(2000);
		main();

	}

	else if (menu == 3) {


		cout << "[-]���������� ��������� ����� ������..." << endl;
		Sleep(2000);
		system("cls");
		system("color 0c");
		cout << "���� ������" << endl;
		Sleep(2000);
		system("cls");
		Sleep(2000);
		main();



	}

	else if (menu == 4) {
		Sleep(2000);
		cout << "\n[-] ������ ���� ������ INT: 4" << endl << endl;
		Sleep(2000);
		system("cls");
		main();


	}

	else if (menu == 5) {


		Sleep(2000);
		cout << "\n[-] ������ ���� ������ CHAR: 1" << endl << endl;
		Sleep(2000);
		system("cls");
		main();

	}

	else if (menu == 6) {


		Sleep(2000);
		cout << "\n[-] ������ ���� ������ DOUBLE: 8" << endl << endl;
		Sleep(2000);
		system("cls");
		main();

	}

	else if (menu == 7) {


		Sleep(2000);
		cout << "\n[-] ������ ���� ������ FLOAT: 4" << endl << endl;
		Sleep(2000);
		system("cls");
		main();

	}


	else if (menu == 8) {


		Sleep(2000);
		cout << "\n[-] ������ ���� ������ BOOL: 1" << endl << endl;
		Sleep(2000);
		system("cls");
		main();

	}

	else if (menu == 9) {

		Sleep(2000);
		cout << "\n[-] ������, � �������" << endl << endl;
		Sleep(2000);
		system("cls");
		main();


	}

	else if (menu == 10) {


		int arr[5][5] = {

			{0},
			{0}



		};

		for (int i = 0; i < 5; i++) {

			for (int j = 0; j < 5; j++) {

				cout << arr[i][j] << "\t";
			}


			cout << endl << endl;
		}



	}
	else {

		cout << "\n�� ����� ������������ ������, ���������� ���� ����� ������:)";
		Sleep(2000);
		system("cls");
		main();

	}



	return 0;





}

