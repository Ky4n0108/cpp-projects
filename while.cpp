#include <iostream>
using namespace std;

int main () {
    int i = 1;
    while (i <= 10) {
        cout << "Perulangan ke-" << i << endl;
        i++;
    }


    {
        // contoh penggunaan do-while loop
        int j = 1;
        do {
            cout << "Do-While Perulangan ke-" << j << endl;
            j++;
        } while (j <= 5);

    }


    return 0;
}