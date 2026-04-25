#include <iostream>
#include <vector>
using namespace std;

// soal proyek uas: Buatlah Program pengolahan data array dan percabangan menggunakan bahasa C++. Baik secara online ayau offline
 /*Seorang petugas koperasi kampus ingin membuat program sederhana untuk mengolah data penjualan harian.
 Ketentuan program :
 program harus menerima input seperti jumlah transaksi (n) dan total belanja setiap transaksi (dalam ribu rupiah).
    proses yang harus dilakukan:
    1. Menyimpan data transaksi ke dalam array
    2. menghitung total pendapatan
    3. menghitung rata-rata transaksi
    4. menentukan transaksi terbesar dan terkecil
    5. menentukan kategori transaksi berdasarkan ketentuan berikut:
        - Total lebih dari 500 : transaksi besar
        - total lebih dari 200 dan kecil dari 500 : transaksi sedang
        - total kecil dari 200 : transaksi kecil */

int main() {
    //1. menyimpan data transaksi dalam array
    int n;
    cout << "Masukkan jumlah transaksi: ";
    cin >> n;
    vector<int> transaksi(n);
    for (int i = 0; i < n; i++) {
        cout << "Masukkan total belanja transaksi ke-" << (i + 1) << " (dalam ribu rupiah): ";
        cin >> transaksi[i];
    }

    //2. menghitung total pendapatan
    int total_pendapatan = 0;
    for (int i = 0; i < n; i++) {
        total_pendapatan += transaksi[i];
    }
    cout << "Total pendapatan: " << total_pendapatan << " ribu rupiah" << endl;

    //3. menghitung rata-rata transaksi
    double rata_rata = static_cast<double>(total_pendapatan) / n;
    cout << "Rata-rata transaksi: " << rata_rata << " ribu rupiah" << endl;

    //4. menentukan transaksi terbesar , sedang, terkecil
    int transaksi_terbesar = transaksi[0];
    int transaksi_sedang = transaksi[0];
    int transaksi_terkecil = transaksi[0];
    for (int i = 1; i < n; i++) {
        if (transaksi[i] > transaksi_terbesar && transaksi[i] > transaksi_sedang) {
            transaksi_terbesar = transaksi[i];
        }
        if (transaksi[i] > transaksi_sedang && transaksi[i] < transaksi_terbesar) {
            transaksi_sedang = transaksi[i];
        }
        if (transaksi[i] < transaksi_terkecil && transaksi[i] < transaksi_sedang) {
            transaksi_terkecil = transaksi[i];
        }
    }
    cout << "Transaksi terbesar: " << transaksi_terbesar << " ribu rupiah" << endl;
    cout << "Transaksi terkecil: " << transaksi_terkecil << " ribu rupiah" << endl;

    //5. menentukan kategori transaksi untuk setiap transaksi
    cout << "Kategori transaksi:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Transaksi ke-" << (i + 1) << " (" << transaksi[i] << " ribu rupiah): ";
        if (transaksi[i] > 500) {
            cout << "Transaksi besar" << endl;
        } else if (transaksi[i] > 200 && transaksi[i] <= 500) {
            cout << "Transaksi sedang" << endl;
        } else if (transaksi[i] <= 200) {
            cout << "Transaksi kecil" << endl;
        
        }
    }

    return 0;
}
    