#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "Select operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter choice : ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case 2:
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case 3:
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

