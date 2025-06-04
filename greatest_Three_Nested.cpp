#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "Greatest number is a = : " << a << endl;
        } else { // c >a , a > b --> b
            cout << "Greatest number is c =: " << c << endl;
        }
    } else { // b > a
        if (b >= c) {
            cout << "Greatest number is b = : " << b << endl;
        } else { // c > b , b > a --> c
            cout << "Greatest number is c =: " << c << endl;
        }
    }
    return 0;
}