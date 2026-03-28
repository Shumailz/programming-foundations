#include <iostream>
#include <string>
using namespace std;
int main() {
    string books[100]; 
    int total_books = 0;
    int selection;
    while (true) {
        cout << "\n--- Library Management System ---" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        if (selection == 1) {
            if (total_books < 100) {
                cout << "Enter the name of the book: ";
                cin.ignore(); // Clears the input buffer
                getline(cin, books[total_books]);
                total_books = total_books + 1;
                cout << "Book added successfully!" << endl;
            }
            if (total_books >= 100) {
                cout << "Library is full!" << endl;
            }
        }
        if (selection == 2) {
            if (total_books == 0) {
                cout << "No books available in the library." << endl;
            }
            if (total_books > 0) {
                cout << "\nList of Available Books:" << endl;
                int i = 0;
                while (i < total_books) {
                    cout << i + 1 << ". " << books[i] << endl;
                    i = i + 1;
                }
            }
        }
        if (selection == 3) {
            if (total_books == 0) {
                cout << "The library is empty. Nothing to borrow." << endl;
            }
            if (total_books > 0) {
                string book_to_borrow;
                cout << "Enter the name of the book you want to borrow: ";
                cin.ignore();
                getline(cin,book_to_borrow );
                cout << "You have borrowed: " << book_to_borrow << endl;
            }
        }
        if (selection == 4) {
            cout << "Exiting the program. Goodbye!" << endl;
            break; 
        }
        if (selection < 1) {
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
        if (selection > 4) {
           cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    }
    return 0;
}