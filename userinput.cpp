#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int number;
    cout << "Please enter an integer: ";
    cin >> number;
    cout << "You entered: " << number << endl;

    // Clear the input buffer to handle the newline character left by cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name); // Allows names with spaces

    cout << "Enter your age: ";
    cin >> age;

    // Input validation for age
    while (age <= 0)
    {
        cout << "Age must be a positive number. Please enter your age: ";
        cin >> age;
    }

    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}
