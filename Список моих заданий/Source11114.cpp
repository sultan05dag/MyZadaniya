#include <iostream>

using namespace std;


void main() {
	setlocale(0, "");

	const int SIZE = 10;

	string words[SIZE] = {


		"eat",
		"cats",
		"car",
		"machine",
		"can",
		"share",
		"shield",
		"sword",
		"sky",
		"shink",



	};


	for (int i = 0; i < SIZE; i++) {

		cout << "[" << i << "] words: " << words[i] << endl;


	}


	const char SIZE2 = 10;

	char words2[SIZE2] {


		'еда',
		'игры',
		'машины',
		'дота',
		'мэн',
		'кек',
		'лол',
		'арбидол',
		'ленивец'




	};



	for (int i2 = 0; i < SIZE2; i2++) {

		cout << "[" << i2 << "] words: " << words2[i2] << endl;


	}




}