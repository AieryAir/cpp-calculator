#include <iostream>

using namespace std;

int main () {

    int userChoice;

    cout << "Simple Calculator" << endl; 
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl; 
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Please select an operation..." << endl;

    cin >> userChoice;

    double userInput1;
    double userInput2;

    cout << "Please input the first number: " << endl;
    cin >> userInput1;

    cout << "Please input the second number: " << endl;
    cin >> userInput2;

    return 0;
}