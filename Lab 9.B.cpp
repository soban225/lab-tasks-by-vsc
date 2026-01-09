#include <iostream>
using namespace std;

int restock(int currentStock, int addedStock) {
    return currentStock + addedStock;
}

int main() {
    int currentStock;

    cout << "Enter Starting stock: ";
    cin >> currentStock;

    for (int day = 1; day <= 7; day++) {

        int addedStock;
        cout << "Day " << day << ": Enter stock added: ";
        cin >> addedStock;

        currentStock = restock(currentStock, addedStock);

        cout << "Stock at end of the Day " << day << ": " << currentStock << endl;
        cout << "-------" << endl;
    }

    return 0;
}