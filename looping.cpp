#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial menggunakan cin


int hitung(int n) {
    if (n == 0) {
        return 1;  // Basis: faktorial 0 adalah 1
    } else {
        return n * hitung(n - 1);  // Rekursi: n! = n * (n-1)!
    }
}

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    cout << "Faktorial dari " << n << " adalah " << hitung(n) << endl;
    return 0;
}
