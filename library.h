#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book.h"

class Library {
private:
    std::vector<Book> books;

public:
    // Add a new book
    void addBook(const Book& book);

    // List all books in the library
    void listBooks() const;

    // Search for a book by title
    void searchByTitle(const std::string& title) const;

    // Borrow a book by title
    void borrowBook(const std::string& title);

    // Return a book by title
    void returnBook(const std::string& title);
};

#endif