#include <iostream>
using namespace std;

/*
Polymorphism -
                Is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
Example:
        Virtual Function: is a member function that you except to be redifined in derived class.
 */

class Parent
{
public:
    void getinfo()
    {
        cout << "parent class" << endl;
    }

    virtual void hello()
    {
        cout << "hello from parent class" << endl;
    }
};

class Child : public Parent
{
public:
       void getinfo()
    {
        cout << "child class" << endl;
    }

    // Virtual Function

    void hello()
    {
        cout << "hello from child class" << endl;
    }
};

int main()
{
    Parent p1;
    p1.hello();
    Child c1;
    c1.hello();
    return 0;
}