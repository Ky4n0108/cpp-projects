#include <iostream>


int main() {
    // the const keyword is used to declare a constant variable
    // tells the compiler that the value of the variable cannot be changed
    // (read-only)

    const double pi = 3.14159; // constant
     double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << "Circumference: " << circumference << "cm" << std::endl;



    return 0;

}