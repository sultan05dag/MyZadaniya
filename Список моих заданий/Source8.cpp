#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "[1] �������\n\n";
	cout << "[+] ������: ";
	int size;
	cin >> size;

	cout << "[+] ��������: ";
	char texture;
	cin >> texture;

	system("cls");
	cout << "���������: \n\n";

	for (int y = 0; y < size; y++) {
		cout << "\x1b[90m# ";
		cout << "\t\t\t\t\t";
		for (int x = 0; x < size; x++) {
			if (x == 0 || x == size - 1 || x == 0 || x == size - 1) {
				cout << "# ";
			}
			else if (y == 0 || y == size - 1 || y == 0 || y == size - 1) {
				cout << "# ";
			}
			else {
				cout << ". ";
			}
		}
		cout << endl;
	}
	return 0;
}