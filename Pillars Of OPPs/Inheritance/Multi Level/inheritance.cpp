#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
string name;
    int rollno;
};

class Teacher
{
public:
    string subject;
    double salary;
};

// Multi level inheritance
class TeachingAssistent : public Teacher, public Student
{
};

int main()
{
    TeachingAssistent t1;
    t1.name = "Madhav";
    t1.salary = 2000;

    cout << t1.name << endl;
    cout << t1.salary << endl;

    return 0;
}