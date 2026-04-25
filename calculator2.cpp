#include <iostream>
#include <limits> // Untuk numeric_limits
using namespace std;

// Fungsi untuk penjumlahan
int add(int a, int b) {
    return a + b;
}
// Fungsi untuk pengurangan
int subtract(int a, int b) {
    return a - b;
}
// Fungsi untuk perkalian
int multiply(int a, int b) {
    return a * b;
}
// Fungsi untuk pembagian
double divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        cerr << " Error: Tidak bisa membagi dengan nol!\n";
        return numeric_limits<double>::quiet_NaN();
    }
}
// Fungsi utama
int main() {
    int num1, num2;
    char operation;
    char repeat;

    cout << "==============================\n";
    cout << "     KALKULATOR SEDERHANA    \n";
    cout << "==============================\n\n";

    do {
        
        cout << "Masukkan angka pertama: ";
        while (!(cin >> num1)) {
            cout << "Input tidak valid! Harap masukkan angka: ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    
        cout << "Pilih operasi (+, -, *, /): ";
        cin >> operation;

        
        cout << "Masukkan angka kedua: ";
        while (!(cin >> num2)) {
            cout << "Input tidak valid! Harap masukkan angka: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "------------------------------\n";

        
        switch (operation) {
            case '+':
                cout << "Hasil: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Hasil: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Hasil: " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "Hasil: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Operator tidak valid! Gunakan +, -, *, atau /" << endl;
        }

        cout << "------------------------------\n";

        
        cout << "Apakah ingin menghitung lagi? (y/n): ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Terima kasih telah menggunakan kalkulator! \n";
    cout << "==============================\n";

    return 0;
}
