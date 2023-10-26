#include <iostream>
#include <cstring>
#include "book.hpp"
using namespace std;

Book::Book(string title, string author, string isbn, int price, int year, string desc)
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
    cout<<"I have been deleted!\n";

    delete[] this->description;
}

string Book::getBookTitle()
{
    return this->title;
}

int Book::getBookPrice()
{
    return this->price;
}


Book::Book(const Book &otherbk)
{
    cout<<"I have been copied!\n";
    strcpy(this->title, otherbk.title);
    strcpy(this->author, otherbk.author);
    strcpy(this->isbn, otherbk.isbn);
    this->price = otherbk.price;
    this->year = otherbk.year;
    this->description = new char[strlen(otherbk.description) + 3];
    strcpy(this->description, otherbk.description);
}