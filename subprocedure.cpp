#include<iostream>
using namespace std;


//prosedur menerima input dan menghitung rata-rata
/* tugas :
1. buatlah notasi algoritma prosedur berdasarkan kode program berikut
2. sebutkan beberapa identifier yang digunakan pada kode program
3. apa yang dimaksud dengan parameter, apakah kode program berikut terdiri dari parameter aktual atau formal, 
    jika iya sebutkan paramater tersebut berada pada baris ke ?
4. jelaskan yang dimaksud dengan parameter masukan dan parameter keluaran.
5. apakah parameter tersebut di implementasikan pada kode program berikut
6. jika terdapat parameter , bagaimana cara melakukan pemanggilan parameter tersebut*/
void hitung_Total ( float &total, int n) {
    float x;
    total = 0;

    for (int i = 1; i <= n; i++) {
        cout <<"masuk nilai ke-" <<i<< " : " ;
        cin >> x;
        total +=x;
    }
}

int main () {
    int n;
    float total ;
    cout << "masukkan jumlah nilai (n) :" ;
    cin >> n ;
    hitung_Total (total, n);
    float rata_rata = total / n;
    cout << "rata-rata nilai = " << rata_rata << endl;
    return 0;
}