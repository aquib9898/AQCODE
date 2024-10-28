#include<iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    
    cout << "Enter the first number: " << endl;
    cin >> num1;
    
    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "The sum is: " << (num1 + num2) << endl;
    cout << "The difference is: " << (num1 - num2) << endl;
    cout << "The product is: " << (num1 * num2) << endl;

    // Check for division by zero
    if (num2 != 0) {
        cout << "The quotient is: " << (num1 / num2) << endl;
    } else {
        cout << "Division by zero is not allowed!" << endl;
    }

    return 0;
}
