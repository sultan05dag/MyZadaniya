#include <iostream>
#include <Windows.h>
using namespace std;


int main() {

	setlocale(0, "");

	cout << "Welcome to the Tartoun's Calculator" << endl;
	cout << "������ �������������� ����������: \n[1] ��������\n[2] ��������� \n[3] ���������\n[4] �������\n" << endl;
	cout << "[ZZZ] �������� �������������� ��������: ";
	char resultat;
	cin >> resultat;
	cout << "[ZZZ] ������� ������ �����: ";
	float znachenie1;
	cin >> znachenie1;
	cout << "[ZZZ] ������� ������ �����: ";
	float znachenie2;
	cin >> znachenie2;
    
	if (resultat == '1' ) {

		cout << "\n�����: " << znachenie1 + znachenie2;
		Sleep(2000);
		system("cls");
			main();


	}

	else if (resultat == '2') {

		cout << "\n�����: " << znachenie1 - znachenie2;
		Sleep(4000);
		system("cls");
		main();


	}

	else if (resultat == '3') {

		cout << "\n�����: " << znachenie1 * znachenie2;
		Sleep(4000);
		system("cls");
		main();


	}

	else if (resultat == '4') {

		cout << "\n�����: " << znachenie1 / znachenie2;
		Sleep(4000);
		system("cls");
		main();


	}
	else {
		system("cls");
		cout << "[-] ����� �������� �����������";
		Sleep(4000);
		system("cls");
		main();


	}



	return 0;
}