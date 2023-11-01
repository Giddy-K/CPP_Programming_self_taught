#include <iostream>


int main (){
    
    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 - 255)
    std::cout << std::endl;

    char value = 65;
    std::cout << "The ASCII value of the letter 'A' is: " << value << std::endl;
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;
    // std::cout << "value(char):" << static_cast<char>(value) << std::endl;

    return 0;
}