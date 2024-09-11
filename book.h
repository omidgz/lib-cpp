#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;

public:
    // Constructor
    Book(std::string title, std::string author, std::string isbn, bool available = true);

    // Getters
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    bool available() const;

    // Borrow book
    bool borrowBook();

    // Return book
    void returnBook();

    // Print book details
    void printDetails() const;
};

#endif // BOOK_H
