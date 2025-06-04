#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n%5==0){
        if(n%3==0){
            cout << n << " is divisible by 5 and 3." << endl;
        }else{
            cout << n << " is divisible by 5 but not by 3." << endl;
        }
    }
    else{
        cout << "Not matching condition " << endl;
    }
}