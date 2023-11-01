#include <iostream>

using namespace std;
int main (){
    
    int var1{123};// Declare and initialize
    cout << "var1: "<< var1 << endl;  //outputs 123
    
    var1 = 55;//Assign
    cout << "After assignment, var1: "<< var1 << endl; // outputs 55

    cout << endl;

    cout << "<------------------------->" << endl;

    double var2 {44.55};
    cout << "var2: "<< var2 << endl; //outputs 44.55

    var2 = 99.99;
    cout << "After assignment, var2: "<< var2 << endl; //outputs 99.99

    cout << endl;

    cout << "<------------------------->" << endl;

    bool state{false}; // Declare and initialze
    cout << boolalpha;
    cout << "state: "<< state << endl; //outputs false

    state = true; //Assign
    cout << "After assignment, state: "<< state << endl; //outputs true

    cout << endl;

    cout << "<------------------------->" << endl;
    //Auto type deduction
    //!Careful about auto assignemts
    auto var3 {333u}; //Declare and initialize with type deduction
    cout << "var3: "<< var3 << endl;

    var3 = -22; //Assign negative number. //!DANGER!

    cout << "var : " << var3 << endl;

    return 0;
}