#include <iostream>
using namespace std;
int getTotalSteps() {
    int steps,total = 0;
    for (int i = 1; i <= 7; i++) {
        cout << "Enter steps for day " <<i<< ": ";
        cin >> steps;
        total += steps;
    }
    return total;
}
int main () {
    int totalSteps = getTotalSteps();

    double average = totalSteps / 7;
    cout << "\nTotal steps in a week: " << totalSteps << endl;
    cout << "Average steps per day: " << average << endl;

    return 0;
}
