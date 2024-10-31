#include <iostream>
#include <iomanip>
// iomanip digunakan untuk mengambil 2 angka di belakang koma
using namespace std;

void main() {

    double berat_apel, berat_jeruk, berat_semangka;
    const double HargaApel_kg = 24000;
    const double HargaJeruk_kg = 16250;
    const double HargaSemangka_kg = 8000;

    // Input berat masing-masing buah
    cout << "Masukkan berat apel dalam (kg): ";
    cin >> berat_apel;
    cout << "Masukkan berat jeruk dalam (kg): ";
    cin >> berat_jeruk;
    cout << "Masukkan berat semangka dalam (kg): ";
    cin >> berat_semangka;

    // Menghitung total berat
    double total_berat = berat_apel + berat_jeruk + berat_semangka;

    // Menghitung harga total tanpa diskon
    double total_harga = (berat_apel * HargaApel_kg) + (berat_jeruk * HargaJeruk_kg) + (berat_semangka * HargaSemangka_kg);

    // Menentukan diskon berdasarkan total berat
    double diskon = 0;
    if (total_berat > 10) {
        diskon = 0.05; // Diskon 5%
    }
    else if (total_berat > 8) {
        diskon = 0.02; // Diskon 2%
    }

    // Menghitung total harga setelah diskon
    double total_harga_setelah_diskon = total_harga * (1 - diskon);

    // Menampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "Total yang harus dibayar Okarun adalah Rp " << total_harga_setelah_diskon << endl;
}