#include <iostream>
using namespace std;
void menu(){
    cout << " MENU " << endl;
    cout << "1) checkEven/Odd" << endl;
    cout << "2) countDigits" << endl;
    cout << "3) sumOfDigits" << endl;
    cout << "4) checkPrime" << endl;
    cout << "5) Exit" << endl;}
int getNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;
}

int countDigits(int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int choice, num;

    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            num = getNumber();
            checkEvenOdd(num);
        }
        else if (choice == 2) {
            num = getNumber();
            cout << "Digits = " << countDigits(num) << endl;
        }
        else if (choice == 3) {
            num = getNumber();
            cout << "Sum = " << sumDigits(num) << endl;
        }
        else if (choice == 4) {
            num = getNumber();
            if (isPrime(num))
                cout << "It is a Prime number" << endl;
            else
                cout << "It is not a prime number" << endl;
        }
        else if (choice == 5) {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}