#include<iostream>
using namespace std;

int main() {

    cout << "My Biodata" << endl;
    cout << "Name: Dang Kyan Jahrman" << endl;
    cout << "Age: 18" << endl;
    cout << "Address: Jalan Kelapa Gading 4, Kemang Manis"<< endl;
    cout << "Hobby: Reading, Coding" << endl;
    cout << "Blood Type: A+" << endl;

 // contoh penggunaan if-else
    { if (true) {
        cout << "Saya suka belajar C++ karena bahasa ini powerful dan banyak digunakan untuk pengembangan perangkat lunak." << endl;
    } else {
        cout << "Saya tidak suka belajar C++." << endl;
    }
     }

    // contoh penggunaan operasi matematika dasar
     {
        // penjumlahan
        int a = 10;
        int b = 8;
        int sum = a + b;

        cout << "contoh penjumlahan: " << a << " + " << b << " = " << sum << endl;
    }

     {
        // pengurangan
        int a = 10;
        int b = 8;
        int sum = a - b;

        cout << "contoh pengurangan: " << a << " - " << b << " = " << sum << endl;
    }

     {  
        // perkalian
        int a = 10;
        int b = 8;
        int sum = a * b;

        cout << "contoh perkalian: " << a << " * " << b << " = " << sum << endl;
    }

    {   
        // pembagian
        int a = 45;
        int b = 9;
        double sum = static_cast<double>(a) / b;

        cout << "contoh pembagian: " << a << " / " << b << " = " << sum << endl;
    }

    {   
        // luas lingkaran
        double r = 7.5;
        double area = 3.14 * r * r ;

        cout << "contoh luas lingkaran dengan jari-jari " << r << " adalah: " << area << endl;
    }

    {   
        // contoh penggunaan loop for
        int n = 5;
        cout << "contoh deret angka dari 1 sampai " << n << ": ";
        for (int i = 1; i <= n; i++) {cout << i << " ";}
        cout << endl;
    }

    {   // contoh penggunaan modulus dan pembagian integer
        int x = 2;
        int y = 3;
        int quotient = x / y;
        int remainder = x % y;

        cout << "contoh pembagian:" << x << "/" << y << "=" << quotient << " dengan sisa " << remainder << endl;
    }

    {
        // contoh penggunaan perpangkatan (eksponen)
        int base = 2;
        int exponent = 3;
        int result = 1;

        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }

        cout << "contoh perpangkatan: " << base << " ^ " << exponent << " = " << result << endl;
    }

    
   
   {
    // contoh penggunaan while loop
    int i = 1;
    while (i <= 5) {
        cout << "Perulangan ke-" << i << endl;
        i++;
    }
   }

   {
    // contoh penggunaan do-while loop
    int j = 1;
    do {
        cout << "Do-While Perulangan ke-" << j << endl;
        j++;
    } while (j <= 5);
   }

   {
    // contoh penggunaan array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Elemen-elemen dalam array: ";
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
   }

   {
    // contoh penggunaan fungsi
    auto tambah = [](int x, int y) {
        return x + y;
    };

    int num1 = 15;
    int num2 = 25;
    int hasil = tambah(num1, num2);

    cout << "Hasil penjumlahan " << num1 << " + " << num2 << " = " << hasil << endl;
   }


   {
    // contoh penggunaan pointer
    int var = 42;
    int* ptr = &var;

    cout << "Nilai variabel var: " << var << endl;
    cout << "Alamat memori variabel var: " << &var << endl;
    cout << "Nilai pointer ptr (alamat memori var): " << ptr << endl;
    cout << "Nilai yang ditunjuk oleh pointer ptr: " << *ptr << endl;
   }

   {
    // contoh penggunaan struktur (struct)
    struct Mahasiswa {
        string nama;
        int umur;
        string jurusan;
    };

    Mahasiswa mhs;
    mhs.nama = "Dang Kyan Jahrman";
    mhs.umur = 18;
    mhs.jurusan = "Teknik Informatika";

    cout << "Data Mahasiswa:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << " tahun" << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;
   }

   {
    // contoh penggunaan kelas (class) dan objek
    class Mobil {
    public:
        string merk;
        string model;
        int tahun;

        void tampilkanInfo() {
            cout << "Merk: " << merk << ", Model: " << model << ", Tahun: " << tahun << endl;
        }
    };

    Mobil mobil1;
    mobil1.merk = "Toyota";
    mobil1.model = "Avanza";
    mobil1.tahun = 2020;

    cout << "Informasi Mobil:" << endl;
    mobil1.tampilkanInfo();
   }

  {
    // contoh penggunaan referensi
    int original = 100;
    int& ref = original;

    cout << "Nilai original sebelum diubah: " << original << endl;
    ref = 200;
    cout << "Nilai original setelah diubah melalui referensi: " << original << endl;
  }

  { 
        // contoh penggunaan switch-case dan break

         int hari;
    cout << "Masukkan angka (1-7) untuk mengetahui hari dalam seminggu: ";
    cin >> hari;
       switch (hari) {
        case 1:
            cout << "Hari 1 adalah Minggu" << endl;
            break;
        case 2:
            cout << "Hari 2 adalah Senin" << endl;
            break;
        case 3:
            cout << "Hari 3 adalah Selasa" << endl;
            break;
        case 4:
            cout << "Hari 4 adalah Rabu" << endl;
            break;
        case 5:
            cout << "Hari 5 adalah Kamis" << endl;
            break;
        case 6:
            cout << "Hari 6 adalah Jumat" << endl;
            break;
        case 7:
            cout << "Hari 7 adalah Sabtu" << endl;
            break;
        default:
            cout << "Input tidak valid. Harap masukkan angka antara 1 dan 7." << endl;
    }
   }

   {
    // contoh penggunaan array multidimensi
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Elemen-elemen dalam array multidimensi (matrix):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    {
        // contoh penggunaan enum
        enum Warna { MERAH, HIJAU, BIRU };

        Warna warnaFavorit = HIJAU;

        switch (warnaFavorit) {
            case MERAH:
                cout << "Warna favorit saya adalah Merah." << endl;
                break;
            case HIJAU:
                cout << "Warna favorit saya adalah Hijau." << endl;
                break;
            case BIRU:
                cout << "Warna favorit saya adalah Biru." << endl;
                break;
        }
    }

    //contoh penggunaan bubble sort
    {
        int arr[] = {64, 34, 25, 12, 22, 11, 90};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout << "Array sebelum diurutkan: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        // Bubble Sort
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    // swap arr[j] dan arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        cout << "Array setelah diurutkan: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;


        //selection sort
        int arr2[] = {64, 25, 12, 22, 11};
        int n2 = sizeof(arr2)/sizeof(arr2[0]);  
        cout << "Array sebelum diurutkan (Selection Sort): ";
        for (int i = 0; i < n2; i++)
            cout << arr2[i] << " ";
        cout << endl;
        for (int i = 0; i < n2-1; i++) {
            int min_idx = i;
            for (int j = i+1; j < n2; j++)
                if (arr2[j] < arr2[min_idx])
                    min_idx = j;
            // swap arr2[min_idx] dan arr2[i]
            int temp = arr2[min_idx];
            arr2[min_idx] = arr2[i];
            arr2[i] = temp;
        }


   
   }

    }


    return 0;
}