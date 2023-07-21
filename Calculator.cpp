#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
                return 1; // Exit the program with an error code
            }
            break;
        default:
            cout << "Invalid operation selected." << endl;
            return 1; // Exit the program with an error code
    }

    cout << "Result: " << result << endl;

    return 0;
}

