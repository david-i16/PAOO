#include <iostream>
#include <string>
#include "book.hpp"

int main()
{
    /*Book bk1("Cei trei muschetari", "Alexandre Dumas", "YTFCYTFT64CV554E6272", 100, 2001, "ceva descriere");
    std::cout<<bk1.getBookTitle()<<" costs "<<bk1.getBookPrice()<<"\n";
    Book bk2("Carte2", "Autor2", "IHSVIHSA53UYC5273GUGVGU3U2C", 20, 1993, "descriere rand 2");
    Book bk3(bk2);
    std::cout<<bk3.getBookPrice()<<"\n";
    Book bk4(std::move(bk1));
    std::cout<<bk4.getBookTitle()<<"\n"<<bk1.getBookTitle();*/

    Book bk1("Title1", "Author1", "ISBN1", 100, 2000, "Description1");
    Book bk2 = bk1; // Copy constructor
    Book bk3;
    bk3 = bk2; // Copy assignment
    std::cout<<bk3.getBookTitle()<<"\n";

    Book bk4 = Book("Title2", "Author2", "ISBN2", 200, 2001, "Description2"); // Move constructor
    Book bk5;
    bk5 = Book("Title3", "Author3", "ISBN3", 300, 2002, "Description3"); // Move assignment
    std::cout<<bk5.getBookTitle()<<"\n";



    DigitalBook eBook("Digital Title", "Digital Author", "12345DIGITAL", 50, 2021, "Digital Description", 500);
    eBook.displayInfo(); 
    Book* bookPtr = &eBook;
    bookPtr->print(); 

    return 0;
}