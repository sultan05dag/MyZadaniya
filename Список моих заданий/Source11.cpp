#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    cout << "��������� �������������� ������" << endl << endl;
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
        cout << "\x1b[94m# ";
        cout << "\t\t\t\t\t";
        for (int x = 0; x < size; x++) {
            if (x % 2 == 1 || y % 2 == 1) {
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