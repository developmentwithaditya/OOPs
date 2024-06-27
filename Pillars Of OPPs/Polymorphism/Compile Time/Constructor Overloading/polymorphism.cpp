#include <iostream>
using namespace std;

/*
Polymorphism -
                Is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
Example: 
        Contructor Overloading.
 */

class Student
{
public:
    string name;

    Student()
    {
        cout << "non-parameterized constructor \n";
    }

    // Constructor Overloading
    Student(string name)
    {
        this->name = name;
        cout << "Name: " << name << endl;
        cout << "parameterized constructor \n";
    }
};

int
main()
{
    Student s1;
    Student s2("Aditya");
    return 0;
}