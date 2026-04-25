#include <iostream>
using namespace std;

long long add(long long a, long long b) {
    return a + b;
}

long long subtract(long long a, long long b) {
    return a - b;
}

long long multiply(long long a, long long b) {
    return a * b;
}

long double divide(long long a, long long b) {
    if (b != 0) {
        return static_cast<long double>(a) / b;
    } else {
        cerr << "Division by zero error!" << endl;
        return 0;
    }
}

int main() {
    long long num1, num2;
    char operation;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second integer: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
