#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama;
    string npm;
    string alamat;
    
    cout << "=========================" << endl;
    cout << "Masukkan data Anda di terminal:" << endl;
    
    // Input nama 
    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);
    
    // Input NPM
    cout << "Masukkan NPM Anda: ";
    cin >> npm;
    cin.ignore();  
    
    // Input alamat 
    cout << "Masukkan Alamat Anda: ";
    getline(cin, alamat);
    
    cout << "=========================" << endl;
    cout << "Data yang Anda masukkan:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Alamat: " << alamat << endl;
    cout << "=========================" << endl;
    
    return 0;
}