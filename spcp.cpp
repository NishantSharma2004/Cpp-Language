#include <iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    cout << "Enter the Cost Price: ";
    cin >> costPrice;

    cout << "Enter the Selling Price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        cout << "You made a profit of: " << profitOrLoss << endl;
    } else if (sellingPrice < costPrice) {
        profitOrLoss = costPrice - sellingPrice;
        cout << "You incurred a loss of: " << profitOrLoss << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}