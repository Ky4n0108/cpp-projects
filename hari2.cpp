#include <iostream>
using namespace std;

int main() {
    cout<<"mencetak nama-nama hari dalam satu minggu"<<endl;
    cout<<"========================================="<<endl;

    int n;

    cout<<"masukkan angka hari anda : ";
    cin>>n;

    switch (n) {
        case 1:
            cout << "Minggu" << endl;
            break;
        case 2:
            cout << "Senin" << endl;
            break;
        case 3:
            cout << "Selasa" << endl;
            break;
        case 4:
            cout << "Rabu" << endl;
            break;
        case 5:
            cout << "Kamis" << endl;
            break;
        case 6:
            cout << "Jumat" << endl;
            break;
        case 7:
            cout << "Sabtu" << endl;
            break;
        default:
            cout << "Input tidak valid. Harap masukkan angka antara 1 dan 7." << endl;
    }

    return 0;
}