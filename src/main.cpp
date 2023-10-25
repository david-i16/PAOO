#include <iostream>
#include <string>
#include "book.h"

int main()
{
    Book bk1 = Book("Cei trei muschetari", 100);
    cout<<bk1.getBookTitle()<<" costs "<<bk1.getBookPrice()<<"\n";
    return 0;
}