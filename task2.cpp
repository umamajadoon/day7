#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for using std::string

int main() {
    // Declare and initialize variables with personal profile information

    std::string name = "Umama Jadoon"; // Person's name
    int age = 19;                      // Person's age
    float height = 157.48f;            // Person's height in centimeters
    char gender = 'F';                 // Person's gender
    bool isStudent = true;             // Indicate if the person is a student

    // Output the values of the variables with descriptive labels

    std::cout << "Personal Profile Information:" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " cm" << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Student: " << std::boolalpha << isStudent << std::endl; // std::boolalpha to print bool as true/false

    return 0; // Return 0 to indicate the program ended successfully
}