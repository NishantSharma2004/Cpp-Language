#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n; 
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-i; j++){
            cout<<" "; // Print spaces
        }
        for(int k=1; k<=i; k++){
            cout<<k; // Print number
        }
        for(int q=i-1; q>=1; q--){
            cout<<q; // Print number
        }
        cout<<endl; // Move to the next line after each row
    }
}