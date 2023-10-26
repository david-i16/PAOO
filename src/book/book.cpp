#include <iostream>
#include "book.hpp"
using namespace std;

Book::Book(string title, string author, string isbn, int price, int year)
{
    this->title = title;
    this->price = price;
    this->author = author;
    this->isbn = isbn;
    this->year = year;
}

Book::~Book()
{
    cout<<"I have been deleted!";

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

void Book::addDescription(string x)
{
    this->description = new string(x);
}