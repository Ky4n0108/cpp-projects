#include <iostream>
using namespace std;
//modifikasi kode dari tutorial dengan larik
// membuat tipe data bentukan (struct)
struct mhs {
    string nama ;
    string kelas;
    string alamat;
    string no_hp;
};

int main() {
    mhs data; // variabel bertipe mhs

    //input data 
    cout << "Masukkan nama: ";
    getline(cin, data.nama);

    cout << "Masukkan kelas: ";
    getline(cin, data.kelas);

    cout << "Masukkan alamat mahasiswa: ";
    getline(cin, data.alamat);

    cout << "Masukkan no_hp mahasiswa: ";
    getline(cin, data.no_hp);
  

    //output data
    cout << "\n===Data siswa===\n" << endl;
    cout << "Nama: " << data.nama << endl;
    cout << "Kelas: " << data.kelas << endl;
    cout << "Alamat: " << data.alamat << endl;
    cout << "No HP: " << data.no_hp << endl;
    return 0; 
}
