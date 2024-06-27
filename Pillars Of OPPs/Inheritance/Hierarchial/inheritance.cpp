#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollno;
};

// Multi level inheritance
class Teacher : public Person
{
public:
    string subject;
};

int main()
{
    Student s1;
    s1.name = "Madhav";
    s1.rollno = 44;

    cout << s1.name << endl;
    cout << s1.rollno << endl;

    Teacher t1;
    t1.name = "Adi";
    t1.subject = "CS";

    cout << t1.name << endl;
    cout << t1.subject << endl;
    return 0;
}