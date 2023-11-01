#include <iostream>

using namespace std;

int main()
{
    char choice;
    bool res;



    cout << "Enter your choice [M/F]" << endl;
    cin >> choice;

     if (choice == 'M' || choice == 'm')
    {
        res = true;
    }
    else if (choice == 'F' || choice == 'f')
    {
        res = false;
    }
    else
    {
        cout << "Error! The choice is not correct";
        return 1;
    }

    switch (res)
    {
    case true:
            cout << "You are male" << endl;
        break;
    case false:
            cout << "You are female" << endl;
        break;
    }

    return 0;
}
