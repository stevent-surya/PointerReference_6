#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

// Function prototypes
void hitungKuadrat(int* numPtr);
void hitungAkarKuadrat(double input, double& result);
void tampilkanAwal();
void tampilkanAkhir();

int main() {
    char yt;
    int pilihan;

    do {
        tampilkanAwal();

        cout << "=== PROGRAM MATEMATIKA ===" << endl;
        cout << "1. Hitung Kuadrat (Pointer)" << endl;
        cout << "2. Hitung Akar Kuadrat (Reference)" << endl;
        cout << "Pilih operasi (1/2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            int angka;
            cout << "\nMasukkan angka: ";
            cin >> angka;
            int original = angka;
            int* ptr = &angka;

            hitungKuadrat(ptr);

            cout << "\n== HASIL KUADRAT ==" << endl;
            cout << "Input\t: " << original << endl;
            cout << "Address\t: " << ptr << endl;
            cout << "Output\t: " << angka << " (";
            cout << original << " x " << original << ")" << endl;

        }
        else if (pilihan == 2) {
            double angka, hasil;
            cout << "\nMasukkan angka: ";
            cin >> angka;
            double original = angka;

            hitungAkarKuadrat(angka, hasil);

            cout << "\n== HASIL AKAR KUADRAT ==" << endl;
            cout << "Input\t: " << original << endl;
            cout << "Address\t: " << &hasil << endl;
            cout << "Output\t: " << hasil << endl;

        }
        else {
            cout << "\nPilihan tidak valid!" << endl;
        }

        cout << "\n=========================" << endl;
        cout << "Hitung lagi? (y/t): ";
        cin >> yt;

    } while (toupper(yt) == 'Y');

    tampilkanAkhir();

    return 0;
}

// Fungsi kuadrat menggunakan pointer
void hitungKuadrat(int* numPtr) {
    *numPtr = (*numPtr) * (*numPtr);
}

// Fungsi akar kuadrat menggunakan reference
void hitungAkarKuadrat(double input, double& result) {
    result = sqrt(input);
}

// Fungsi untuk menampilkan awal program
void tampilkanAwal() {
    cout << "\n=== SELAMAT DATANG DI PROGRAM MATEMATIKA ===" << endl;
    cout << "Program ini dapat menghitung kuadrat dan akar kuadrat." << endl;
    cout << "Silakan pilih menu yang tersedia." << endl;
    cout << "=============================================" << endl;
}

// Fungsi untuk menampilkan akhir program
void tampilkanAkhir() {
    cout << "\n=== TERIMA KASIH ===" << endl;
    cout << "Program telah selesai dijalankan." << endl;
    cout << "Semoga bermanfaat!" << endl;
}