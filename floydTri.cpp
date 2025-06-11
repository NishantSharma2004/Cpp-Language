#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    int k = 1; // Initialize k to 1 for the first number
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << k << " "; // Print the current number
            k++; // Increment k for the next number
        }
        cout << endl; // Move to the next line after each row
    }
}