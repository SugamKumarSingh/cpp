#include <iostream>
#include <string.h>
using namespace std;

// Created a base class/parent class called media
class media {
    // Created data members as protected
    protected:
    string title;
    int price;

    // Created member functions as public
    public:
    // Parameterized constructor to initialise price and title
    media(int p, string s) {
        title = s;
        price = p;
    }
    // Virtual function called display with return type as void
    virtual void display() {
    }
};

// Created a derived class from media class called book
class book: public media {
    // Declared private integer data member pages
    private:
    int pages;

    // Public access specifier for constructor and member functions
    public:
    // parameterized constructor to initialise pages and data members of base class
    book(int x, int y, string z): media (y, z) {
        pages = x;
    }
    // Display function of type void created to override display function of base class
    void display() {
        cout<<"\nData stored is:"<<endl;
        cout<<"Title of book is "<<title<<endl;
        cout<<"Price of book is "<<price<<endl;
        cout<<"Number of pages are "<<pages<<endl;
    }
};

// Created a derived class from media class called tape
class tape: virtual public media {
    // Declared private double data member time
    private:
    double time;

    // Public access specifier for constructor and member functions
    public:
    // Parameterized constructor to initialise time and data members of base class
    tape(double a, int b, string c): media (b, c) {
        time = a;
    }
    // Display function of type void created to override display function of base class
    void display() {
        cout<<"\nData stored is:"<<endl;
        cout<<"Title of tape is "<<title<<endl;
        cout<<"Price of tape is "<<price<<endl;
        cout<<"Time duration is "<<time<<endl;
    }
};

int main()
{
    // Created b1 object of class book and t1 object of class tape by passing argument
    book b1(40, 499, "Kitaab");
    tape t1(9.45, 199, "Cassette");

    // Created two pointers to base class media
    media *ptr, *ptr1;
    // Passing address of object of class book and tape to pointers of class media
    ptr = &b1;
    ptr1 = &t1;

    // Using pointers of base class to access functions of derived class to attain runtime polymorphism
    ptr->display();
    ptr1->display();

    return 0;
}