#include <iostream>
using namespace std;

/*
Abstraction -
            Hiding all unnecessary details & showing only the important parts.
Example:
       Access Modifier:
                        Private
                        Protected
                        Public
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