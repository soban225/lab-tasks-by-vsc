#include <iostream>
using namespace std;
int main() {
    int books;
    cout<<"Enter Number of Books: ";
    cin>>books;
    int bookcount=1;
    int grandtotal=0 ;

    while (bookcount <= books) {
        cout<<"Book:"<<bookcount<<endl;
        int days;
        cout<<"Days the Book is late =";
        cin >> days;
        int day=1;
        int fine = 5;
        int totalfine=0;
        while (day<=days && fine <=1000) {
            cout<<" Day: "<<day<<endl;
            cout<<" Fine: "<<fine<<endl;
            totalfine+=fine;
            fine*=2;
            day++;
        }
        cout << "Total Fine for Book " <<bookcount<<endl<< " = Rs. " << totalfine << endl;
        grandtotal += totalfine;
        bookcount++;
    }
    cout<<"Grand Total ="<<grandtotal;
    return 0;
}