#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {

	// memasukan isi array nama variabel : DeretArray dengan jumlah array 10 beserta isi arraynya
	int DeretArray[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };

	// konversi array menjadi vector
	vector <int> vect(DeretArray, DeretArray + sizeof(DeretArray) / sizeof(int));
	//menampilkan hasil konversi
	cout << "Deret sebelum di sorting : \n";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " | ";
	}

	cout << "\n";

	// melakukan sorting
	sort(DeretArray, DeretArray + 10, greater < int >());

	// menampilkan hasil sorting
	cout << "Deret setelah di sorting: \n";
	for (int i = 0; i < 10; i++) {
		cout << DeretArray[i] << " | ";
	}
	cout << endl;

	// menghitung median
	float median;
	if (10 % 2 == 0) {
		median = (DeretArray[10 / 2 - 1] + DeretArray[10 / 2]) / 2.0;
	}
	else {
		median = DeretArray[10 / 2];
	}

	// menampilkan hasil median
	cout << "Nilai Median : " << median << endl;

}
