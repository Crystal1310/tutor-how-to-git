#include <iostream>
using namespace std;

int main() {
    int belanja;

    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukkan total belanjaan (Rp): ";
    cin >> belanja;

    cout << "--- Ringkasan Pembayaran ---" << endl;

    int diskon = 0;

    if (belanja >= 300000) {
        diskon = belanja * 0.2; 
        cout << "Diskon (20%): " << diskon << endl;
    } 
    else if (belanja >= 100000) {
        diskon = belanja * 0.1;
        cout << "Diskon (10%): " << diskon << endl;
    } 
    else {
        cout << "Diskon (0%): 0" << endl;
    }

    int totalBayar = belanja - diskon;
    cout << "Total Bayar   : " << totalBayar << endl;

    return 0;
}