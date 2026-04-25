#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;

// ==================== CEK OVERFLOW ====================
bool isOverflow(double x) {
    return isinf(x) || isnan(x);
}

// ==================== OPERASI DASAR ====================
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) {
    double r = a * b;
    if (isOverflow(r)) {
        cerr << "Error: Overflow! Angka terlalu besar.\n";
        return numeric_limits<double>::quiet_NaN();
    }
    return r;
}

double divide(double a, double b) {
    if (b == 0) {
        cerr << "Error: Tidak bisa membagi dengan nol!\n";
        return numeric_limits<double>::quiet_NaN();
    }
    return a / b;
}

// ==================== OPERASI ILMIAH ====================
double power(double base, double exp) {
    double r = pow(base, exp);
    if (isOverflow(r)) {
        cerr << "Error: Overflow saat menghitung pangkat!\n";
        return numeric_limits<double>::quiet_NaN();
    }
    return r;
}

double squareRoot(double x) {
    if (x < 0) {
        cerr << "Error: Akar bilangan negatif tidak valid!\n";
        return numeric_limits<double>::quiet_NaN();
    }
    return sqrt(x);
}

double logarithm(double x) {
    if (x <= 0) {
        cerr << "Error: Logaritma hanya untuk x > 0!\n";
        return numeric_limits<double>::quiet_NaN();
    }
    return log10(x);
}

// ==================== TRIGONOMETRI ====================
double degToRad(double d) {
    return d * M_PI / 180.0;
}

double sine(double x) { return sin(degToRad(x)); }
double cosine(double x) { return cos(degToRad(x)); }
double tangent(double x) { return tan(degToRad(x)); }

// ==================== INPUT VALID ====================
double getNumber(const string &prompt) {
    double value;
    cout << prompt;
    while (!(cin >> value)) {
        cout << "Input tidak valid! Masukkan angka: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}

// ==================== MENU ====================
void showMenu() {
    cout << "====================================\n";
    cout << "          KALKULATOR ILMIAH         \n";
    cout << "====================================\n";
    cout << "1. Penjumlahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "3. Perkalian (*)\n";
    cout << "4. Pembagian (/)\n";
    cout << "5. Pangkat (pow)\n";
    cout << "6. Akar Kuadrat (sqrt)\n";
    cout << "7. Logaritma (log base 10)\n";
    cout << "8. Sinus (sin, input derajat)\n";
    cout << "9. Cosinus (cos, input derajat)\n";
    cout << "10. Tangen (tan, input derajat)\n";
    cout << "0. Keluar\n";
    cout << "------------------------------------\n";
}

// ==================== MAIN PROGRAM ====================
int main() {
    int choice;
    double num1, num2;
    char repeat;

    cout << fixed << setprecision(10); // output lebih rapi

    do {
        showMenu();
        cout << "Pilih operasi (0-10): ";

        while (!(cin >> choice)) {
            cout << "Input tidak valid! Masukkan angka: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "------------------------------------\n";

        switch (choice) {
            case 1:
                num1 = getNumber("Masukkan angka pertama: ");
                num2 = getNumber("Masukkan angka kedua: ");
                cout << "Hasil: " << add(num1, num2) << endl;
                break;

            case 2:
                num1 = getNumber("Masukkan angka pertama: ");
                num2 = getNumber("Masukkan angka kedua: ");
                cout << "Hasil: " << subtract(num1, num2) << endl;
                break;

            case 3:
                num1 = getNumber("Masukkan angka pertama: ");
                num2 = getNumber("Masukkan angka kedua: ");
                cout << "Hasil: " << multiply(num1, num2) << endl;
                break;

            case 4:
                num1 = getNumber("Masukkan angka pertama: ");
                num2 = getNumber("Masukkan angka kedua: ");
                cout << "Hasil: " << divide(num1, num2) << endl;
                break;

            case 5:
                num1 = getNumber("Masukkan basis: ");
                num2 = getNumber("Masukkan pangkat: ");
                cout << "Hasil: " << power(num1, num2) << endl;
                break;

            case 6:
                num1 = getNumber("Masukkan angka: ");
                cout << "Hasil: " << squareRoot(num1) << endl;
                break;

            case 7:
                num1 = getNumber("Masukkan angka: ");
                cout << "Hasil: " << logarithm(num1) << endl;
                break;

            case 8:
                num1 = getNumber("Masukkan sudut (derajat): ");
                cout << "sin(" << num1 << ") = " << sine(num1) << endl;
                break;

            case 9:
                num1 = getNumber("Masukkan sudut (derajat): ");
                cout << "cos(" << num1 << ") = " << cosine(num1) << endl;
                break;

            case 10:
                num1 = getNumber("Masukkan sudut (derajat): ");
                cout << "tan(" << num1 << ") = " << tangent(num1) << endl;
                break;

            case 0:
                cout << "Terima kasih telah menggunakan kalkulator! 😊\n";
                return 0;

            default:
                cout << "Pilihan tidak valid! Coba lagi.\n";
        }

        cout << "------------------------------------\n";
        cout << "Hitung lagi? (y/n): ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Program selesai. Sampai jumpa!\n";
    return 0;
}
