#include<iostream>
int main() {
    // type conversion = conversion a value of one data type to another
    // implicit = automatic
    // explicit = precede value with new data type (int)
 
 //double x = (int) 7.25;
 
 //std::cout << x;

 int correct = 8;
 int questions = 10;
double score = correct / (double) questions * 100;

   std::cout << score << "%" << std::endl;

    return 0;
}
