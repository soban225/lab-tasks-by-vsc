#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    int sum = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements = " << sum << endl;

    return 0;
}
