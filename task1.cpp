#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for using std::string

int main() {
    // Single-line comment: This program prints "Hello, World!" to the console

    /*
     * Multi-line comment:
     * This part of the program demonstrates basic syntax and comments.
     * It includes declaring variables of different types and printing their values.
     */

    // Print "Hello, World!" to the console
    std::cout << "Hello, World!" << std::endl;

    // Variable declarations
    int integerVar = 42;                // An integer variable
    float floatVar = 3.14f;             // A float variable
    std::string stringVar = "C++";      // A string variable
    char charVar = 'A';                 // A char variable
    double doubleVar = 3.14159;         // A double variable
    bool boolVar = true;                // A boolean variable

    // Output statements to print the values of the variables
    std::cout << "Integer: " << integerVar << std::endl;
    std::cout << "Float: " << floatVar << std::endl;
    std::cout << "String: " << stringVar << std::endl;
    std::cout << "Char: " << charVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Boolean: " << std::boolalpha << boolVar << std::endl; // std::boolalpha to print bool as true/false

    return 0; // Return 0 to indicate the program ended successfully
}