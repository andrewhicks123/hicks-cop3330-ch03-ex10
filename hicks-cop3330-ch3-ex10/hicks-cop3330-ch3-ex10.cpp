/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Andrew Hicks
 */


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string operation;
    double num1, num2;
    cout << "Enter the operation: ";
    cin >> operation >> num1 >> num2;
    if (operation == "+") {
        cout << "Adding " << num1 << " and " << num2 << " is " << (num1 + num2) << endl;
    }
    else if (operation == "-") {
        cout << "Subtracting " << num1 << " and " << num2 << " is " << (num1 - num2) << endl;
    }
    else if (operation == "*") {
        cout << "Multiplying " << num1 << " by " << num2 << " is " << (num1 * num2) << endl;
    }
    else if (operation == "/") {
        cout << "Dividing " << num1 << " by " << num2 << " is " << (num1 / num2) << endl;
    }
    return 0;
}
