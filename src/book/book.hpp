#pragma once

#include <iostream>
using namespace std;

class Book
{
private:
    char title[101];
    char author[101];
    char isbn[101];
    int price;
    int year;
    char* description;

public:
    Book(string title, string author, string isbn, int price, int year, string desc);
    ~Book();
    string getBookTitle();
    int getBookPrice();
    Book(const Book &otherbk);
};