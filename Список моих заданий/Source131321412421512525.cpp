#include <iostream>
#include <Windows.h>


using namespace std;

int main() {

	setlocale(0, "");
	system("color 0c");

	cout << "[-]C����� ���� � �����������: \n[1] ������� �����\n[2] ���������� �����.\n" << endl;
	cout << "������� ��������: ";
	int menu;
	cin >> menu;

	switch (menu) {
	case 1:

		system("color 0c");
		cout << "[-] ������ ������� ����: \n[1] ���\n[2] ����\n[3] ����\n[4] �����������\n[5] ��������\n[6] ��������\n[7] ��������\n[8] ���\n[9] ��������\n[10] ����������������\n[11] �������\n[12] �������������\n[13] ������\n[14] �����������\n[15] �����������\n";
		break;
	case 2:
		system("color 0c");
		cout << "[-] ������ ���������� ����: \n[1] Food \n[2] Games \n[3] Porridge \n[4] Entertainment \n[5] Alcohol \n[6] Cigarettes \n[7] Gambling addicts \n[8] Tea \n[9] Tea drinking \n[10] Alcohol drinking \n[11] Functions \n[12] Cognitiveness \n[13 ] Logic \n[14] Metamorphosis \n[15] Mitochondria ";
		break;

	default:
		system("color 0c");
		cout << "������� �������� ��������" << endl << endl;
		main();
		break;

	}
	cout << "�������� �����: ";
	int menushka2;
	cin >> menushka2;

	switch (menushka2) {

	case 1:

		cout << "[�������] ��� ----> Food" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 2:

		cout << "[�������] ���� ----> Games" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 3:

		cout << "[�������] ���� ----> Porridge" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 4:
		cout << "[�������] ����������� ----> Entertainment" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 5:
		cout << "[�������] �������� ----> Alcohol" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 6:

		cout << "[�������] �������� ----> Cigarettes" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 7:

		cout << "[�������] �������� ----> Gambling addicts" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 8:

		cout << "[�������] ��� ----> Tea" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 9:

		cout << "[�������] ����������� ----> Teadrinking" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 10:

		cout << "[�������] ���������������� ----> Alcoholdrinking" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 11:

		cout << "[�������] ������� ----> Function" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 12:

		cout << "[�������] ������������� ----> Cognitiveness" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 13:

		cout << "[�������] ������ ----> Logic" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 14:

		cout << "[�������] ����������� ----> Metamorphosis" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 15:

		cout << "[�������] ����������� ----> Mitochondria" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	default:

		cout << "������� ������������ �������� ";


	}

	int menushka3;
	cin >> menushka3;

	switch (menushka3) {


	case 1:

		cout << "[�������] Food ----> ���" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 2:

		cout << "[�������] Games ----> ����" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 3:

		cout << "[�������] Porridge ----> ����" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 4:
		cout << "[�������] Entertainment ----> �����������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 5:
		cout << "[�������] Alcohol ----> ��������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 6:

		cout << "[�������] Cigarettes ----> ��������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 7:

		cout << "[�������] Gambling addicts ----> ��������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 8:

		cout << "[�������] Tea ----> ���" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 9:

		cout << "[�������] Teadrinking ----> ��������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 10:

		cout << "[�������] Alcoholdrinking ----> ����������������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 11:

		cout << "[�������] Function ----> �������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 12:

		cout << "[�������] Cognitiveness ----> �������������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 13:

		cout << "[�������] Logic ----> ������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 14:

		cout << "[�������] Metamorphosis ----> �����������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 15:

		cout << "[�������] Mitochondria ----> �����������" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	default:

		cout << "������� ������������ �������� ";




	}


	   


	return 0;

}