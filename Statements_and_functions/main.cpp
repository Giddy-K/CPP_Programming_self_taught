#include <iostream>

int addNumbers( int first_param, int second_param) {
    int result = first_param + second_param;

    return result;
}

int main (){
    int first_number {13}; //statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum is : " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Sum is : " << sum << std::endl;


    sum = addNumbers(30,54);
    std::cout << "Sum is : " << sum << std::endl;

    std::cout << "Sum :" << addNumbers(10,10) << std::endl;

    return 0;    
}