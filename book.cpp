#include "book.h"
#include <iostream>

// Constructor
Book::Book(std::string title, std::string author, std::string isbn, bool available)
    : title(title), author(author), isbn(isbn), isAvailable(available) {}

// Getters
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return isbn; }
bool Book::available() const { return isAvailable; }

// Borrow book
bool Book::borrowBook() {
    if (isAvailable) {
        isAvailable = false;
        return true;
    }
    return false;
}

// Return book
void Book::returnBook() {
    isAvailable = true;
}

// Print book details
void Book::printDetails() const {
    std::cout << "Title: " << title << ", Author: " << author
              << ", ISBN: " << isbn
              << (isAvailable ? " (Available)" : " (Borrowed)") << std::endl;
}
