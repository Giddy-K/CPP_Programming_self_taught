#include <iostream>

int main()
{

    // Addition
    int num1, num2; // Declare two integer variables.

    std::cout << "Enter first number: ";
    std::cin >> num1; // Read the value of first variable from user input.
    std::cout << "\nEnter second number: ";
    std::cin >> num2; // Read the value of second variable from user input.

    int sum = num1 + num2; // Add the values of both numbers and store it in a new variable 'sum'.
    std::cout << "\nThe sum is :" << sum << std::endl;

    std::cout << "<------------------>" << std::endl;

    // Multiplication
    int product = num1 * num2;
    std::cout << "\nProduct:" << product << std::endl;

    std::cout << "<------------------>" << std::endl;

    // Division
    int division = num1 / num2;
    std::cout << "\nDivision:" << division << std::endl;

    std::cout << "<------------------>" << std::endl;

    // Modulas
    int modulus = num1 % num2;
    std::cout << "\nModulus:" << modulus << std::endl;

    modulus = 31 % 10;
    std::cout << "\nModulus with example:" << modulus << std::endl;

    std::cout << "<------------------>" << std::endl;

    // Subtraction
    int subtraction = num1 - num2;
    std::cout << "\nSubtraction:" << subtraction << std::endl;

    std::cout << "<------------------>" << std::endl;

    return 0;
}