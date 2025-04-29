#include <iostream>
#include <string>

using namespace std;

bool validateMobileNumber(const string& number) {
    // Check if the number starts with 0 and has a length of 10
    if (number.length() != 10 || number[0] != '0') {
        return false;
    }

    // Check if all characters are digits using ASCII values
    for (char digit : number) {
        if (digit < '0' || digit > '9') {
            return false;
        }
    }

    return true;
}

int main() {
    string mobileNumber;

    cout << "Enter mobile number: ";
    cin >> mobileNumber;

    if (validateMobileNumber(mobileNumber)) {
        cout << "Valid mobile number." << endl;
    } else {
        cout << "Invalid mobile number." << endl;
    }

    return 0;
}
