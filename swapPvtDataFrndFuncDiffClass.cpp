#include <iostream>
using namespace std;

//Declared class_2 in the starting of the program to use it into class_1
class class_2;
class class_1
{
    //private variable data declared
    int data;

    //public access specifier used
    public:

    //get function of void type to get input of data in class_1
    void get()
    {
        cout << "Enter number in class 1: ";
        cin >> data;
    }
    //to display data stored in class_1
    void display()
    {
        cout << "Data stored in class 1 is " << data << endl;
    }
    //declared a friend function of both the classes
    friend void swapData(class_1 *obj1, class_2 *obj2);
};
class class_2
{
    //private variable data declared
    int data;

    //public access specifier used
    public:

    //get function of void type to get input of data in class_2
    void get()
    {
        cout << "Enter number in class 2: ";
        cin >> data;
    }
    //to display data stored in class_2
    void display()
    {
        cout << "Data stored in class 2 is " << data << endl;
    }
    //declared a friend function of both the classes
    friend void swapData(class_1 *obj1, class_2 *obj2);
};
//defining friend function outside the class to swap data using pointers
void swapData(class_1 *obj1, class_2 *obj2)
{
    int temp = obj1->data;
    obj1->data = obj2->data;
    obj2->data = temp;
}

int main()
{
    //declared one object of each class
    class_1 o1;
    class_2 o2;

    //called get function to take input of data in each class
    o1.get();
    o2.get();

    //displaying data in each before swaping using display function
    cout << "\nBefore Swapping\n";
    o1.display();
    o2.display();
    //calling friend function to swap data, and passing addressess of the objects into it
    swapData(&o1, &o2);

    //displaying data in each after swaping
    cout << "\nAfter Swapping\n";
    o1.display();
    o2.display();

    return 0;
}