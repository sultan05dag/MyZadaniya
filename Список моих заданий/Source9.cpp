#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[+] ��������� �������������� ������\n\n";
	cout << "[1] �������������\n\n";
	cout << "[+] �������� ������: ";

	int figura;
	cin >> figura;

	switch (figura) {
	case 1:
		system("cls");
		cout << "[1] �������������\n\n";
		cout << "[+] ������:";
		int shir;
		cin >> shir;

		cout << "[+] ������: ";
		int vys;
		cin >> vys;

		cout << "[+] ��������: ";
		char texture;
		cin >> texture;

		for (int y = 0; y < vys; y++) {
			cout << "\x1b[96m# ";
			cout << "\t\t\t\t\t\t\t";
			for (int x = 0; x < shir; x++) {
				cout << texture << ". ";
			}
			cout << endl;
		}
	}
	return 0;
}
