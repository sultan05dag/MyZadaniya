#include <iostream>
#include <windows.h>
#define clear system("cls");
using namespace std;



void Gorizont() {
	setlocale(0, "");

	int j = 0;

	cout << "\n\n [-] �������� ����� �����: ";
	int chislo1;
	cin >> chislo1;
	cout << "\n\n[-] �������� ������: ";
	char mysymbol;
	cin >> mysymbol;
	cout << "\n\n[-]���������: \n";


	while (j < chislo1) {

		cout << mysymbol;
		j++;


	}
}

void Vertical() {
	setlocale(0, "");

	int j2 = 0;

	cout << "\n\n[-] �������� ����� �����: ";
	int chislo2;
	cin >> chislo2;
	cout << "\n\n[-] �������� ������: ";
	char mysymbol2;
	cin >> mysymbol2;
	cout << "\n\n[-] ���������: \n";

	while (j2 < chislo2) {

		cout << mysymbol2 << endl;
		j2++;
	}

}


int main() {
	setlocale(0, "");

	cout << "[-] �������� ���������: �������������� ������ \n\n";
	cout << "[-] ������ �����: \n\n[1] �����\n\n";
	cout << "[-] �������� ������: ";
	char menu;
	cin >> menu;

	if (menu == '1') {

		cout << "\n\n[-] �������� ��� ������: \n\n[1] �������������� \n\n[2] ������������\n\n";
		cout << "�������� ���: ";
		int liniafig;
		cin >> liniafig;

		if (liniafig == 1) {

			Gorizont();




		}

		else if (liniafig == 2) {

			Vertical();


		}

		else {

			cout << "\n\n[-] ������� ������������ �������� ������";
			Sleep(2000);
			clear;
			main();



		}







	}



	return 0;
}