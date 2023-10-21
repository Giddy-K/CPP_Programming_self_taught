#include <iostream>

// Compile time error
int main()
{
    std::cout << "Hello word" << std::endl;

    // runtime error
    int value = 7 / 0;
    std::cout << value << std::endl;
    return 0;
}