#include <iostream>
using namespace std;

/*
Polymorphism -
                Is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
Example:
        Function Overriding: Same function with Same parameters but with different implementation.
 */

class Parent
{
public:
    void getinfo()
    {
        cout << "parent class" << endl;
    }
};

class Child : public Parent
{
public:

// Function Overriding
    void getinfo()
    {
        cout << "child class" << endl;
    }
};

int main()
{
     Parent p1;
    p1.getinfo();
    Child c1;
    c1.getinfo();
    return 0;
}