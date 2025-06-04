#include <iostream>
using namespace std;
int main(){
    int i ,n;
    cout<<"Enter the number of tables you want to print: ";
    cin>>n;
    for (i=1; i<=10; i++){
        cout<<n<< "*"<<i<<"="<<i*n<<endl;
    }
    return 0;
    
}