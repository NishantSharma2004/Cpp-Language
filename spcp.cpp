// #include <iostream>
// using namespace std;

// int main() {
//     float costPrice, sellingPrice, profitOrLoss;

//     cout << "Enter the Cost Price: ";
//     cin >> costPrice;

//     cout << "Enter the Selling Price: ";
//     cin >> sellingPrice;

//     if (sellingPrice > costPrice) {
//         profitOrLoss = sellingPrice - costPrice;
//         cout << "You made a profit of: " << profitOrLoss << endl;
//     } else if (sellingPrice < costPrice) {
//         profitOrLoss = costPrice - sellingPrice;
//         cout << "You incurred a loss of: " << profitOrLoss << endl;
//     } else {
//         cout << "No profit, no loss." << endl;
//     }

//     return 0;
// }
# include <iostream>
using namespace std;
int main(){
    int cp , sp ;
    cout<<"Enter the Cost Price:";
    cin>>cp;
    cout<<"Enter the Selling Price:";
    cin >>sp;
    if (sp>cp){
        cout<<"You made a profit of: "<<sp-cp<<endl;
    } else if(cp>sp){
        cout<<"You incurred a loss of: "<<cp-sp<<endl;
    } else {
        cout<<"No profit, no loss."<<endl;
    }

}