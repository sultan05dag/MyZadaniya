#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");

	cout << "Welcome to the MyCalculator" << endl;
	cout << "\n������� ������ ��������: ";
    double num1;
	cin >> num1;
	cout << "\n������� ������ ��������: ";
	double num2;
	cin >> num2;
	cout << "\n\n������ ��������: \n\n[1] ��������� \n[2] �������� \n[3] ��������� \n[4] �������" << endl;

	cout << "�������� ��������: ";

	int menu;
	cin >> menu;

	cout << "���������: ";
	
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

		cout << "�� ������� ���-�� �� ��. ���������.";


		break;
	}




	return 0;
}