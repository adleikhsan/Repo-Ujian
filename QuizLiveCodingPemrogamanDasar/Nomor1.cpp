#include<iostream>
using namespace std;

void hitungEK(double m, double v) {
	double EK = 0.5 * m * (v * v);
	cout << "Besar energi kinetik: " << EK << "Joule" << endl;
}
int main() {
	double massa_sepeda, berat_andika, kecepatan,total_massa;
	cout << "Masukkan massa sepeda Andika (gram): ";
	cin >> massa_sepeda;
	cout << "Masukkan berat Andika (Kg): ";
	cin >> berat_andika;
	cout << "Masukkan kecepatan (m/s): ";
	cin >> kecepatan;

	total_massa = (massa_sepeda / 1000) + berat_andika;
	hitungEK(total_massa, kecepatan);
	return 0;
}
