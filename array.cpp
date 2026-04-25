#include <iostream>
using namespace std;

int main() {
    
    //buatlah pengulangan array dari angka/ jumlah yang kita inputkan , lalu menghitung rata-rata dari nilai yang kita input. sehabis itu dikategorikan A, B, C, D. diatas 85 = A, 75-84 = B, 60-74 = C, dibawah 60 = D
    int N;
    cout << "masukkan jumlah mahasiswa: ";
    cin >> N;
    
    int nilai[N];
    for (int i = 0; i < N ; i++) {
        cout << "masukkan nilai mahasiswa-" << (i + 1) << ": ";
        cin >> nilai[i];
    }
    
    //menentukan lulus atau tidak untuk masing masing siswa
    int total = 0;
    for (int i = 0; i < N ; i++) {
        total += nilai[i];
    }
    
    double rata_rata = total / N;
    
    //menentukan kategori
    if (rata_rata > 85) {
        cout << "kategorinya adalah A" << endl;
    } else if (rata_rata >= 75 && rata_rata <= 84) {
        cout << "kategorinya adalah B" << endl;
    } else if (rata_rata >= 60 && rata_rata <= 74) {
        cout << "kategorinya adalah C" << endl;
    } else if (rata_rata < 60) {
        cout << "kategorinya adalah D" << endl;
    } else {
        cout << "nilai tidak valid" << endl;    
    }

    return 0;
}