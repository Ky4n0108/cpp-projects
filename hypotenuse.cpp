#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "masukkan sisi a: ";
    cin >> a;

    cout << "masukkan sisi b: ";
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    cout << "panjang sisi c adalah: " << c << endl;

}