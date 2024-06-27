#include <iostream>
#include <string>
using namespace std;

/* This pointer-
                Is a special pointer in C++ that point to the current object.
                this->prop is same as *(this).prop
*/

class Teacher
{
private:
    float salary;

public:
    string name;
    string department;
    string subjects;

    Teacher(string name, string department, string subjects, float salary)
    {
        this->name = name;
        this->department = department;
        this->subjects = subjects;
        this->salary = salary;
    }

    void change_Dept(string newdepartment)
    {
        department = newdepartment;
    }

    void getInfo()
    {
        cout << "Name of t1: " << name << endl;
        cout << "Department of t1: " << department << endl;
        cout << "Subject of t1: " << subjects << endl;
    }
};

int main()
{
    Teacher t1("Adi", "Computer Science", "OPPs", 3000.00);
    t1.getInfo();

    return 0;
}