#include <iostream>
#include <string>
#include "book.hpp"

int main()
{
    Book bk1("Cei trei muschetari", "Alexandre Dumas", "YTFCYTFT64CV554E6272", 100, 2001, "ceva descriere");
    std::cout<<bk1.getBookTitle()<<" costs "<<bk1.getBookPrice()<<"\n";
    Book bk2("Carte2", "Autor2", "IHSVIHSA53UYC5273GUGVGU3U2C", 20, 1993, "descriere rand 2");
    Book bk3(bk2);
    std::cout<<bk3.getBookPrice()<<"\n";
    Book bk4(std::move(bk1));
    std::cout<<bk4.getBookTitle()<<"\n"<<bk1.getBookTitle();
    return 0;
}