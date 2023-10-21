//load libraries that will be used in the program
#include <iostream>

consteval int get_value(){
    return 3;
}
//the main function - this is the starting point
int main (){
    
    std::cout << "Num 1";
    std::cout << "Num 2" << std::endl;

    //let the OS know that the program has finished successfully
    return 0;
}