#include <iostream>
#include "library.h"
#include "book.h"

// Add a new book
void Library::addBook(const Book &book)
{
    books.push_back(book);
}

// List all books in the library
void Library::listBooks() const
{
    for (const auto &book : books)
    {
        book.printDetails();
    }
}

// Search for a book by title
void Library::searchByTitle(const std::string &title) const
{
    auto found = std::find_if(books.begin(), books.end(), [&title](const Book &b)
                              { return b.getTitle() == title; });

    if (found != books.end())
    {
        found->printDetails();
    }
    else
    {
        std::cout << "Book not found!" << std::endl;
    }
}

// Borrow a book by title
void Library::borrowBook(const std::string &title)
{
    auto found = std::find_if(books.begin(), books.end(), [&title](Book &b)
                              { return b.getTitle() == title; });

    if (found != books.end())
    {
        if (found->borrowBook())
        {
            std::cout << "You have borrowed the book: " << title << std::endl;
        }
        else
        {
            std::cout << "The book is currently unavailable." << std::endl;
        }
    }
    else
    {
        std::cout << "Book not found!" << std::endl;
    }
}

// Return a book by title
void Library::returnBook(const std::string &title)
{
    auto found = std::find_if(books.begin(), books.end(), [&title](Book &b)
                              { return b.getTitle() == title; });

    if (found != books.end())
    {
        found->returnBook();
        std::cout << "You have returned the book: " << title << std::endl;
    }
    else
    {
        std::cout << "Book not found!" << std::endl;
    }
}
