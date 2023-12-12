#pragma once

#include <iostream>
#include <memory>
#include <thread>
#include <mutex>
#include <vector>

/*
namespace library {



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


class AudioBook : public Book 
{
private:
    int duration; 

public:
    AudioBook(std::string title, std::string author, std::string isbn, int price, int year, std::string desc, int duration);
    int getDuration();
    void displayInfo() override; 
};


}*/



std::mutex mtx; 

void print(const std::string& message) {
    std::lock_guard<std::mutex> guard(mtx); 
    std::cout << message << std::endl;
}

void threadFunc(std::shared_ptr<int> sharedData) {
    print("Thread started. Shared data: " + std::to_string(*sharedData));
    //.............
    //.............
    //.............
    print("Thread ending.");
}








