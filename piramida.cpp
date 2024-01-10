#include <iostream>

using namespace std;

int tinggi_segitiga;

int main() {

	cout << "Masukan jumlah angka: ";
	cin >> tinggi_segitiga;

	for (int i = 1; i <= tinggi_segitiga; i++) {

		for (int j = 1; j <= tinggi_segitiga - i; j++) {
			cout << " ";
		}

		for (int k = 1; k <= i; k++) {
			cout << " ^";
		}
		cout << endl;
	}
	return 0;
}