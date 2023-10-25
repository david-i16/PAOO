#include <iostream>
#include "book.h"
using namespace std;

Book::Book(string Title, int price)
{
    this->title = Title;
    this->price = price;
}

string Book::getBookTitle()
{
    return this->title;
}

int Book::getBookPrice()
{
    return this->price;
}