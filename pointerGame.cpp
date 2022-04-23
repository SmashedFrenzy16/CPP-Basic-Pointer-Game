#include <iostream>

using namespace std;

int main()
{

    double number;
    double *pNumber = &number;
    string name;
    string *pName = &name;
    bool isTrue;
    bool *pIsTrue = &isTrue;
    string boolInput;

    cout << "Enter a number (integer or double): ";
    cin >> number;

    cout << "Enter a name: ";
    cin >> name;

    cout << "Enter y or n: ";
    cin >> boolInput;
    
    if(boolInput == "y" || boolInput == "Y") {

        isTrue = true;

    } else {

        isTrue = false;
    }

    cout << "number variable memory address: " << pNumber << endl;
    cout << "name variable memory address: " << pName << endl;
    cout << "isTrue variable memory address: " << pIsTrue << endl;

    cout << "number variable converted back from memory address: " << *pNumber << endl;
    cout << "name variable converted back from memory address: " << *pName << endl;
    cout << "isTrue variable converted back from memory address: " << *pIsTrue << endl;

    return 0;
}