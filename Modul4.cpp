#include <iostream>

using namespace std;

int main() {
	double nilai;

	cout << "=== Program Penentuan Nilai ===" << endl;
	cout << "Masukkan nilai angka	: ";
	cin >> nilai;

	cout << "\nHasil :" << endl;

	if (nilai > 89) {
		cout << "Nilai : A" << endl;
		cout << "Keterangan : Naik Kelas" << endl;
	}
	else if (nilai > 80 && nilai <= 89) {
		cout << "Nilai : B" << endl;
		cout << "Keteranagn : Naik Kelas" << endl;
	}
	else if (nilai > 70 && nilai <= 80) {
		cout << "Nilai : C" << endl;
		cout << "Keteranagn : Naik Kelas" << endl;
	}
	else if (nilai > 60 && nilai <= 79) {
		cout << "Nilai : D" << endl;
		cout << "Keteranagn : Tinggal Kelas" << endl;
	}
	else if (nilai <= 60) {
		cout << "Nilai : E" << endl;
		cout << "Keteranagn : Tinggal Kelas" << endl;
	}

	return 0;
}
