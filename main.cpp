#include <iostream>

using namespace std;

double addition (double a, double b) {
    return a + b;
}

double subtraction (double a, double b) {
    return a - b;
}

double multiplication (double a, double b) {
    return a * b;
}

double division (double a, double b) {
    return a / b;
}

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

    double result;

    switch (userChoice) {

        case 1: 

        result = addition(userInput1, userInput2);

        cout << "The sum of " << userInput1 << " and " << userInput2 << " is... " << endl;
        cout << result;

        break;


        case 2:

        result = subtraction(userInput1, userInput2);

        cout << "The difference between " << userInput1 << " and " << userInput2 << " is... " << endl;
        cout << result;

        break; 

        
        case 3: 

        result = multiplication(userInput1, userInput2);

        cout << "The product of " << userInput1 << " and " << userInput2 << " is... " << endl;
        cout << result;

        break;


        case 4: 

        result = division(userInput1, userInput2);

        cout << "The quotient of " << userInput1 << " and " << userInput2 << " is... " << endl;
        cout << result;

        break;
        
        default: 

        cout << "Error. Please try again." << endl;

    }

    return 0;
}