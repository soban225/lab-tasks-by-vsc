#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define the Book struct
struct Book {
    string title;
    string author;
    int pages;
};

int main() {
    vector<Book> library;
    int n;

    cout << "How many books do you want to enter? ";
    cin >> n;
    cin.ignore(); // To ignore the newline after the number input

    for (int i = 0; i < n; i++) {
        Book b;

        cout << "Enter details for book " << i + 1 << ":\n";

        cout << "Title: ";
        getline(cin, b.title); // Using getline for strings with spaces

        cout << "Author: ";
        getline(cin, b.author);

        cout << "Number of pages: ";
        cin >> b.pages;
        cin.ignore(); // Ignore newline before next input

        library.push_back(b);
        cout << endl;
    }

    // Display all books
    cout << "You entered:\n";
    for (const Book& b : library) {
        cout << "Title: " << b.title
             << ", Author: " << b.author
             << ", Pages: " << b.pages << endl;
    }

    return 0;
}
