#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to teach variables
void teachVariables() {
    cout << "\n=== Understanding Variables in C++ ===" << endl;
    cout << "Variables are containers for storing data values." << endl;
    cout << "Example:" << endl;
    cout << "int age = 25;" << endl;
    cout << "string name = \"John\";" << endl;
    cout << "double height = 5.9;" << endl;
    cout << "Press Enter to continue..." << endl;
    cin.ignore();
    cin.get();
}

// Function to teach data types
void teachDataTypes() {
    cout << "\n=== Understanding Data Types in C++ ===" << endl;
    cout << "Common data types:" << endl;
    cout << "- int: for integers (e.g., 5, -10)" << endl;
    cout << "- double: for floating-point numbers (e.g., 3.14)" << endl;
    cout << "- char: for single characters (e.g., 'A')" << endl;
    cout << "- string: for text (e.g., \"Hello World\")" << endl;
    cout << "- bool: for true/false values" << endl;
    cout << "Press Enter to continue..." << endl;
    cin.ignore();
    cin.get();
}

// Function to teach loops
void teachLoops() {
    cout << "\n=== Understanding Loops in C++ ===" << endl;
    cout << "Loops allow code to be executed repeatedly." << endl;
    cout << "For loop example:" << endl;
    cout << "for(int i = 0; i < 5; i++) {" << endl;
    cout << "    cout << i << endl;" << endl;
    cout << "}" << endl;
    cout << "This prints: 0 1 2 3 4" << endl;
    cout << "Press Enter to continue..." << endl;
    cin.ignore();
    cin.get();
}

// Function to teach conditionals
void teachConditionals() {
    cout << "\n=== Understanding Conditionals in C++ ===" << endl;
    cout << "Conditionals execute code based on conditions." << endl;
    cout << "If-else example:" << endl;
    cout << "int x = 10;" << endl;
    cout << "if(x > 5) {" << endl;
    cout << "    cout << \"x is greater than 5\";" << endl;
    cout << "} else {" << endl;
    cout << "    cout << \"x is not greater than 5\";" << endl;
    cout << "}" << endl;
    cout << "Press Enter to continue..." << endl;
    cin.ignore();
    cin.get();
}

// Function to teach functions
void teachFunctions() {
    cout << "\n=== Understanding Functions in C++ ===" << endl;
    cout << "Functions are reusable blocks of code." << endl;
    cout << "Example:" << endl;
    cout << "int add(int a, int b) {" << endl;
    cout << "    return a + b;" << endl;
    cout << "}" << endl;
    cout << "Usage: int result = add(3, 4); // result = 7" << endl;
    cout << "Press Enter to continue..." << endl;
    cin.ignore();
    cin.get();
}

// Function to teach arrays
void teachArrays() {
    cout << "\n=== Understanding Arrays in C++ ===" << endl;
    cout << "Arrays store multiple values of the same type." << endl;
    cout << "Example:" << endl;
    cout << "int numbers[5] = {1, 2, 3, 4, 5};" << endl;
    cout << "Access: cout << numbers[0]; // prints 1" << endl;
    cout << "Press Enter to continue..." << endl;
    cin.ignore();
    cin.get();
}

int main() {
    int choice;
    do {
        cout << "\n=== C++ Learning Program ===" << endl;
        cout << "Choose a topic to learn:" << endl;
        cout << "1. Variables" << endl;
        cout << "2. Data Types" << endl;
        cout << "3. Loops" << endl;
        cout << "4. Conditionals" << endl;
        cout << "5. Functions" << endl;
        cout << "6. Arrays" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                teachVariables();
                break;
            case 2:
                teachDataTypes();
                break;
            case 3:
                teachLoops();
                break;
            case 4:
                teachConditionals();
                break;
            case 5:
                teachFunctions();
                break;
            case 6:
                teachArrays();
                break;
            case 0:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 0);

    return 0;
}
