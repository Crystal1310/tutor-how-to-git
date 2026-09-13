#include <iostream>
using namespace std;

int main () {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 80) {
        cout << "Nilai mutu A" << endl;
    } else if (68<= nilai && nilai < 80) {
        cout << "Nilai mutu B" << endl;
    } else if (56<= nilai && nilai < 68) {
        cout << "Nilai mutu C" << endl;
    } else if (45<= nilai && nilai < 56) {
        cout << "Nilai mutu D" << endl;
    } else {
        cout << "Nilai mutu E" << endl;
    }

    if (nilai >=65) {
        cout << "Status: Lulus" << endl;
    } else {
        cout << "Status: Tidak Lulus" << endl;          
    }

    return 0;
}