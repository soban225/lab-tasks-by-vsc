#include <iostream>
using namespace std;
void attemptwithdraw(int &balance,int amount){
    cout<<"Enter the amount to withdraw :"<<endl;
    cin >> amount;
    if(amount<=balance){
        balance-=amount;
        cout<<"The remaining balance is :\n"<<balance<<endl;
    }
    else{
        cout<<"Invalid balance"<<endl;
    }
}
int main() {
    int balance,amount;

    cout << "Enter initial balance"<<endl;
    cin >> balance;

    attemptwithdraw(balance,amount);
    cout << "balance after function call\n"<<balance;
    return 0;
}