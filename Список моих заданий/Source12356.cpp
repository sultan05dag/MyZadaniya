#include <iostream>
#include <Windows.h>
#define clear system("cls");

using namespace std;



void Linia() {
	setlocale(0, "");

	int gg = 0;

	cout << "�������� ����� �����: \n";
	int kk1;
	cin >> kk1;
	cout << "�������� ������ �����: \n";
	char gege;
	cin >> gege;
	cout << "��������� �������� ���������: \n";

	while (gg < kk1) {


		cout << gege;
		gg++;




	}
}
void LiniaVertikal() {

	setlocale(0, "");

	int gg2 = 0;

	cout << "�������� ����� �����: \n";
	int kk2;
	cin >> kk2;
	cout << "�������� ������ �����: \n";
	char hihi;
	cin >> hihi;
	cout << "��������� ��������: \n";

	while (gg2 < kk2) {

		cout << gg2;




	}
}


		int figurochkidlyaLinii() {
			setlocale(0, "");
			clear;
			cout << "[+] ������:�����\n\n";
				cout << "[+] �������� ��� �����: \n[1] ��������������\n [2] ������������\n";
			cout << "[+] �������� ��� �����: ";

			int tiplinii;
			cin >> tiplinii;

			if (tiplinii == 1) {
				Linia();
			}
			else if (tiplinii == 2) {
				LiniaVertikal();
			}
			else {
				cout << "\n[-] ������� ���� ������ �� ����������, ��� ��� ����� �������� �� ���� � ������ ���������";
				Sleep(2000);
				clear;
				figurochkidlyaLinii();
			}
		}



int main() {
	setlocale(0, "");

	cout << "���������: �������������� ������\n\n";
	cout << "������ �����: [1] �����\n\n";
	cout << "�������� ������: ";
	int menu;
	cin >> menu;

	int lineechka;
	cin >> lineechka;

	if (lineechka == 1) {
		figurochkidlyaLinii();
	}
	else {
		cout << "\n[-]����� ������ �� ����������";
		Sleep(1000);
		clear;
		main();
	}


}








   