#include <iostream>
#include <string>
#include "book.hpp"

int main()
{
    Book bk1 = Book("Cei trei muschetari", "Alexandre Dumas", "YTFCYTFT64CV554E6272", 100, 2001);
    bk1.addDescription("carte frumoasa");
    cout<<bk1.getBookTitle()<<" costs "<<bk1.getBookPrice()<<"\n";
    return 0;
}