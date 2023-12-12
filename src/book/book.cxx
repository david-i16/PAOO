#include <iostream>
#include <cstring>
#include "book.hpp"


/*
namespace library {



Book::Book() {
    title[0] = '\0';
    author[0] = '\0';
    isbn[0] = '\0';
    price = 0;
    year = 0;
    description = nullptr;
}

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

Book& Book::operator=(const Book &otherbk)
{
    if (this != &otherbk) { 
        strcpy(this->title, otherbk.title);
        strcpy(this->author, otherbk.author);
        strcpy(this->isbn, otherbk.isbn);
        this->price = otherbk.price;
        this->year = otherbk.year;

        delete[] this->description; 
        this->description = new char[strlen(otherbk.description) + 1];
        strcpy(this->description, otherbk.description);
    }
    return *this;
}

Book& Book::operator=(Book &&otherbk)
{
    if (this != &otherbk) { 
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

        delete[] this->description; 
        this->description = otherbk.description;
        otherbk.description = nullptr;
    }
    return *this;
}


DigitalBook::DigitalBook(std::string title, std::string author, std::string isbn, int price, int year, std::string desc, int fileSize)
: Book(title, author, isbn, price, year, desc), fileSize(fileSize) {}

int DigitalBook::getFileSize() 
{
    return fileSize;
}


void Book::displayInfo()
{
    std::cout << "Title: " << title << ", Author: " << author << ", Year: " << year << std::endl;
}

void DigitalBook::displayInfo()
{
    Book::displayInfo(); 
    std::cout << "File Size: " << fileSize << "MB" << std::endl;
}


void Book::print()
{
    std::cout << "Printing book details..." << std::endl;
    displayInfo();
}

Printable::~Printable() 
{
    
}

AudioBook::AudioBook(std::string title, std::string author, std::string isbn, int price, int year, std::string desc, int duration)
: Book(title, author, isbn, price, year, desc), duration(duration) {}

int AudioBook::getDuration() 
{
    return duration;
}

void AudioBook::displayInfo()
{
    Book::displayInfo(); 
    std::cout << "Duration: " << duration << " minutes" << std::endl;
}



}*/