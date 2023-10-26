#pragma once

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string isbn;
    int price;
    int year;
    string *description;

public:
    Book(string title, string author, string isbn, int price, int year);
    ~Book();
    string getBookTitle();
    int getBookPrice();
    void addDescription(string x);
};