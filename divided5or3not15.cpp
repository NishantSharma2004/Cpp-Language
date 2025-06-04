#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num > 0) {
        if (num % 5 == 0 || num % 3 == 0) {
            if (num % 15 != 0) {
                cout << num << " is divisible by 5 or 3 but not by 15." << endl;
            } else {
                cout << num << " is divisible by 15, so it does not meet the condition." << endl;
            }
        } else {
            cout << num << " is not divisible by 5 or 3." << endl;
        }
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}