#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int uang;
    int harga = 0;

    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    
    cout << "Pilih kode minuman (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            harga = 4000;
            break;
        case 2:
            harga = 6000;
            break;
        case 3:
            harga = 10000;
            break;
        default:

            cout << " "<< endl;
            cout << "--- DETAIL TRANSAKSI ---" << endl;
            return 0;
    }

    cout << "Masukkan uang Anda (Rp): ";
    cin >> uang;

    cout << "" << endl;
    cout << "--- DETAIL TRANSAKSI ---" << endl;

    if (uang < harga) {
        cout << "Transaksi Gagal! Uang Anda kurang Rp " << harga - uang << "." << endl;
    } else {
        int kembalian = uang - harga;
        cout << "Transaksi Berhasil!" << endl;
        cout << "Kembalian Anda: Rp " << kembalian << endl;

        // Hitung pecahan kembalian
        int lembar5k = kembalian / 5000;
        int sisa = kembalian % 5000;
        int lembar1k = sisa / 1000;

        cout << "Pecahan kembalian:" << endl;
        cout << "- " << lembar5k << " Lembar Rp 5.000" << endl;
        cout << "- " << lembar1k << " Lembar Rp 1.000" << endl;
    }

    return 0;
}