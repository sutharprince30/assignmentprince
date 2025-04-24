#include <iostream>
using namespace std;

// Function to add two numbers
int add(int x, int y) {
    return x + y;
}

// Function to subtract two numbers
int subtract(int x, int y) {
    return x - y;
}

// Function to multiply two numbers
int multiply(int x, int y) {
    return x * y;
}

// Function to divide two numbers (checks for division by zero)
int divide(int x, int y) {
    if (y == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return x / y;
}

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    int result = 0;

    // Select the correct function based on the operation
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
