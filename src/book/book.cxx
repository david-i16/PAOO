#include <iostream>
#include <cstring>
#include "book.hpp"

Book::Book(std::string title, std::string author, std::string isbn, int price, int year, std::string desc)
{
    strcpy(this->title, title.c_str());
    this->price = price;
    strcpy(this->author, author.c_str());
    strcpy(this->isbn, isbn.c_str());
    this->year = year;
    this->description = new char[desc.size()+3];
    strcpy(this->description, desc.c_str());
}

Book::~Book()
{
    std::cout<<"I have been deleted!\n";

    delete[] this->description;
}

std::string Book::getBookTitle()
{
    return this->title;
}

int Book::getBookPrice()
{
    return this->price;
}


Book::Book(const Book &otherbk)
{
    std::cout<<"I have been copied!\n";
    strcpy(this->title, otherbk.title);
    strcpy(this->author, otherbk.author);
    strcpy(this->isbn, otherbk.isbn);
    this->price = otherbk.price;
    this->year = otherbk.year;
    this->description = new char[strlen(otherbk.description) + 3];
    strcpy(this->description, otherbk.description);
}

Book::Book(Book &&otherbk)
{
    std::cout<<"I have been moved!\n";
    strcpy(this->title, otherbk.title);
    memset(otherbk.title, 0, sizeof otherbk.title);
    strcpy(this->author, otherbk.author);
    memset(otherbk.author, 0, sizeof otherbk.author);
    strcpy(this->isbn, otherbk.isbn);
    memset(otherbk.isbn, 0, sizeof otherbk.isbn);
    this->price = otherbk.price;
    otherbk.price = 0;
    this->year = otherbk.year;
    otherbk.year = 0;
    this->description = otherbk.description;
    otherbk.description = NULL;
}