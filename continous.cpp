#include<iostream>
using namespace std;
int main(){
// continuous is used  for skip the itration 
    int n;
    cout << "Enter the number of iterations: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            continue; // skip the even numbers
        }
        cout << i << " "; // print only odd numbers " "(uaed for giving the space)
    }
}