#include <iostream>
#include <string>
using namespace std;

/* Inheritance -
                When properties & member() of base class are passed on to the derived class.
                Used to code reuseblity.
    Mode Of Inheritance -
                          Private
                          Public
                          Protected
    Type Of Inhertance -
                        Single level inheritance -> base class inherit by derived class.
                        Multi level inheritance -> base class inherit by multiple derived class.
*/

class Person // base class
{
public:
    string name;
    int age;
};

class Student : public Person // class Student inherit the properties & member() of the base class Person.
{
    // We derived name & age from the base class.
public:
    int rollno;
};

class Graduates : public Student // class Graduate inherit the properties & member() of the class Student.
{
    // We derived name, age & rollno from the class Student.
public:
    string research;
};

int main()
{
    Graduates g1;
    g1.name = "Aditya";
    g1.research = "Technology";

    cout << g1.name << endl;
    cout << g1.research << endl;

    return 0;
}