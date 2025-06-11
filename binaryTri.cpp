#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value: ";
    cin>>n;
    // int a=5; // Initialize a to 1 for the first number
    // for(int i=1; i<=n; i++){
    //     if(i%2!=0) a=1;
    //     else a=0;
    //     for(int j=1; j<=i; j++){
    //         cout<<a;
    //         if(a==1) a=0; // Toggle between 1 and 0
    //         else a=1; // Toggle between 0 and 1
            
    //     }
    //     cout<<endl;
    // }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0) // Check if the sum of row and column indices is even
                cout<<"1"; // Print 1 for even sum
            else
                cout<<"0"; // Print 0 for odd sum
        }
        cout<<endl; // Move to the next line after each row
    }

}