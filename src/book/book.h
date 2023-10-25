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

public:
    Book(string title, int price);
    string getBookTitle();
    int getBookPrice();
};