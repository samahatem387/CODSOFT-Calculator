#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc;
    char Continue;
    do {
        double num1, num2;
        char op;
        cout << "Please enter your first number: " << endl;
        cin >> num1;
        cout << "Please enter your second number: " << endl;
        cin >> num2;
        cout << "Please choose operation (+, -, *, /): " << endl;
        cin >> op;

        try {
            switch (op) {
                case '+':
                    cout << "Result: " << calc.add(num1, num2) << endl;
                    break;
                case '-':
                    cout << "Result: " << calc.subtract(num1, num2) << endl;
                    break;
                case '*':
                    cout << "Result: " << calc.multiply(num1, num2) << endl;
                    break;
                case '/':
                    cout << "Result: " << calc.divide(num1, num2) << endl;
                    break;
                default:
                    cout << "Invalid operator!" << endl;
            }
        } catch (const std::exception &e) {
            cout << "Error: " << e.what() << endl;
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> Continue;
    } while (Continue == 'y' || Continue == 'Y');

    return 0;
}
