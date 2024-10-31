#include <iostream>
using namespace std;

/* 
Diketahui:
M = massa
V = kecepatan
*/

static void hitungEK(double M, double V) {

    // Menghitung energi kinetik

    double EK = 0.5 * M * ( V * V );
    cout << "Besar Energi Kinetik: " << EK << " Joule" << endl;
}

void main() {
    
    double M_Sepeda_Gram, M_Andika_Kg, V;

    // Input massa dan kecepatan :

    cout << "Masukkan massa sepeda dalam gram: ";
    cin >> M_Sepeda_Gram;
    cout << "Masukkan massa Andika dalam kg: ";
    cin >> M_Andika_Kg;
    cout << "Masukkan kecepatan dalam m/s: ";
    cin >> V;

    // Mengubah massa ke Kg :
    double M_Total = (M_Sepeda_Gram / 1000) + M_Andika_Kg;

    // Hasil fungsi hitungEK :
    hitungEK(M_Total, V);

 
}