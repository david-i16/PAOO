#include <iostream>
#include <string>
#include "book.hpp"
#include <memory>
#include <thread>
#include <mutex>
#include <vector>


int main()
{
    /*Book bk1("Cei trei muschetari", "Alexandre Dumas", "YTFCYTFT64CV554E6272", 100, 2001, "ceva descriere");
    std::cout<<bk1.getBookTitle()<<" costs "<<bk1.getBookPrice()<<"\n";
    Book bk2("Carte2", "Autor2", "IHSVIHSA53UYC5273GUGVGU3U2C", 20, 1993, "descriere rand 2");
    Book bk3(bk2);
    std::cout<<bk3.getBookPrice()<<"\n";
    Book bk4(std::move(bk1));
    std::cout<<bk4.getBookTitle()<<"\n"<<bk1.getBookTitle();*/

    /*library::Book bk1("Title1", "Author1", "ISBN1", 100, 2000, "Description1");
    library::Book bk2 = bk1; // Copy constructor
    library::Book bk3;
    bk3 = bk2; // Copy assignment
    std::cout<<bk3.getBookTitle()<<"\n";

    library::Book bk4 = library::Book("Title2", "Author2", "ISBN2", 200, 2001, "Description2"); // Move constructor
    library::Book bk5;
    bk5 = library::Book("Title3", "Author3", "ISBN3", 300, 2002, "Description3"); // Move assignment
    std::cout<<bk5.getBookTitle()<<"\n";



    library::DigitalBook eBook("Digital Title", "Digital Author", "12345DIGITAL", 50, 2021, "Digital Description", 500);
    eBook.displayInfo(); 
    library::Book* bookPtr = &eBook;
    bookPtr->print();
    library::AudioBook audioBook("Audio Title", "Audio Author", "12345AUDIO", 60, 2021, "Audio Description", 600);
    audioBook.displayInfo(); */












    
    std::unique_ptr<int> unique(new int(3)); 
    std::cout << "Unique pointer data: " << *unique << std::endl;

    std::shared_ptr<int> shared(new int(5));
    std::cout << "Shared pointer data: " << *shared << std::endl;

    std::vector<std::thread> threads;
    for (int i = 0; i < 3; ++i) {
        threads.push_back(std::thread(threadFunc, shared));
    }

    for (auto& t : threads) {
        t.join();
    }

    

    return 0;
}