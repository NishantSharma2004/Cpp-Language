#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Using for loop to print even and odd numbers from 1 to 10."<<endl;
    for (int i = 1; i<=10; i++){
        if (i%2==0) {
            cout<<i<<" is even."<<endl;
        }
        else {
            cout<<i<<" is odd."<<endl;
        }
    }
}