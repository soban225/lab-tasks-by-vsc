#include <iostream>
using namespace std;
int main() {
    int books;
    cout<<"Enter Number of Books: ";
    cin>>books;
    int bookcount=1;
    while (bookcount <= books) {
        cout<<"book"<<bookcount<<endl<<"Fine"<<endl;
        int fine = 5;
        int day =1;
        while (fine<=1000) {
            cout<<" Day: "<<day<<endl;
            cout<<" Fine: "<<fine<<endl;
            fine*=2;
            day++;
        }
        cout<<endl;
        bookcount++;
    }

    return 0;
}