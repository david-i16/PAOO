#pragma once

#include <iostream>

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
    Book(std::string title, std::string author, std::string isbn, int price, int year, std::string desc);
    ~Book();
    std::string getBookTitle();
    int getBookPrice();
    Book(const Book &otherbk);
    Book(Book &&otherbk);
};