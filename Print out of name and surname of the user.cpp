// Print out of name and surname of the user.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void MyFunction(string name, string surname) {

}
double AddNumbers(double num1, double num2) {
    return num1 + num2;
}
double MultiplyNumbers(double num1, double num2) {
    return num1 * num2;
}

int main(){
    string name, surname;
    double num1, double num2;
    int Operator;

    cout << " Enter your name and surname " << endl;
    cin >> name >> surname;

    cout << "Hello, your name is" << name << " and your surname is" << surname;

    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    cout << "Choose the type of operator" << endl;
    cout << " 1:AddNumbers " << endl;
    cout << " 2:MultiplyNumbers " << endl;
    cin >> Operator;

    switch (Operator) {

    case 1:
        cout << "The result is " << AddNumbers(num1, num2);
    case 2:
        cout << " The result is " << MultiplyNumbers(num1, num2);
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
