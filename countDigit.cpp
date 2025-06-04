<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int count = 0;
    while (n>0) {
        n = n / 10; // Remove the last digit
        count++; // Increment the count of digits
    }
    cout<<count;
=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int count = 0;
    while (n>0) {
        n = n / 10; // Remove the last digit
        count++; // Increment the count of digits
    }
    cout<<count;
>>>>>>> 7b0d6c13fe443134e8d333715f5c8f29f8ba8f00
}