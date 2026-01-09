#include <iostream>
using namespace std;
int main() {
    string password;
    while(true) {
        cout<< "enterYourPassword:"<<endl;
        cin >> password;
        if (password == "Python123") {
            cout<<"yourPasswordIsCorrect"<<endl;
            break;
        }
        else {
            cout<<"incorrect,tryAgain"<<endl;
        }
    }
    return 0;
}


