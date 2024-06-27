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

class GradStudent : public Student
{
public:
    string research;
};

class Teacher : public Person
{
public:
    string subject;
    float salary;
};

class TA : public Student, public Teacher
{
};

int main()
{
    TA ta1;
    ta1.name = "Madhav";
    ta1.rollno = 23;
    ta1.subject = "CS";
    ta1.salary = 2300;

    cout << "Name: " << name << endl;
    cout << "Rollno: " << ta1.rollno << endl;
    cout << "Subject: " << ta1.subject << endl;
    cout << "Salary: " << ta1.salary << endl;

    return 0;
}