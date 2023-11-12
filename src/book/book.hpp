#pragma once

#include <iostream>

class Printable {
public:
    virtual void print() = 0;
    virtual ~Printable() = 0;
};

class Book : public Printable {
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
    Book& operator=(const Book &otherbk); 
    Book& operator=(Book &&otherbk); 
    Book();
    virtual void displayInfo();
    void print() override;
};

class DigitalBook : public Book 
{
private:
    int fileSize; 

public:
    DigitalBook(std::string title, std::string author, std::string isbn, int price, int year, std::string desc, int fileSize);
    int getFileSize();
    void displayInfo() override;
};


