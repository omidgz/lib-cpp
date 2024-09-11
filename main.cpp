#include <iostream>
#include "library.h"

void showMenu() {
    std::cout << "\n--- Library Management System ---\n";
    std::cout << "1. Add Book\n";
    std::cout << "2. List Books\n";
    std::cout << "3. Search Book\n";
    std::cout << "4. Borrow Book\n";
    std::cout << "5. Return Book\n";
    std::cout << "6. Exit\n";
}

int main() {
    Library library;
    int choice;
    std::string title, author, isbn;

    while (true) {
        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:  // Add book
                std::cin.ignore();
                std::cout << "Enter book title: ";
                std::getline(std::cin, title);
                std::cout << "Enter author name: ";
                std::getline(std::cin, author);
                std::cout << "Enter ISBN: ";
                std::getline(std::cin, isbn);
                library.addBook(Book(title, author, isbn));
                std::cout << "Book added successfully!\n";
                break;

            case 2:  // List all books
                library.listBooks();
                break;

            case 3:  // Search book by title
                std::cin.ignore();
                std::cout << "Enter book title: ";
                std::getline(std::cin, title);
                library.searchByTitle(title);
                break;

            case 4:  // Borrow book
                std::cin.ignore();
                std::cout << "Enter book title to borrow: ";
                std::getline(std::cin, title);
                library.borrowBook(title);
                break;

            case 5:  // Return book
                std::cin.ignore();
                std::cout << "Enter book title to return: ";
                std::getline(std::cin, title);
                library.returnBook(title);
                break;

            case 6:  // Exit
                std::cout << "Exiting the system.\n";
                return 0;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
