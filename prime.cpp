#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    bool flag = true;
    for (int i = 2; i <= n-1; i++){
        if(n%2==0){
            flag = false;
            break;

        }
    }
    if(n==1){
        cout<<"1 is neither prime nor composite"<<endl;
    } else if(flag==true){
        cout<<n<<" is a prime number"<<endl;
    } else {
        cout<<n<<" is not a prime number"<<endl;
    }
        
}