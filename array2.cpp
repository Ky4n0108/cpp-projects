#include <iostream>
using namespace std;

//penjumlahan dua buah matriks 
int main () {
    //menciptakan dua buah matriks 2x2
    int matriksA[2][2] = {{1, 2}, {3, 4}};
    int matriksB[2][2] = {{5, 6}, {7, 8}};
    int hasil[2][2];

    //menjumlahkan kedua matriks
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    //menampilkan hasil penjumlahan
    cout << "Hasil penjumlahan matriks A dan B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}