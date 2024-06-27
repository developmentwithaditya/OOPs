#include <iostream>
#include <string>
using namespace std;

class Teacher
{

    // Properties that associated with Teacher.
    string name;
    string department;
    string subjects;
    float salary;

    // Methods that associated with Teacher.
    void change_Dept(string newdepartment)
    {
        department = newdepartment;
    }
};

int main()
{
    // Objects of class Teacher

    Teacher t1;
    t1.name = "Adi";
    t1.department = "Computer Science";
    t1.subjects = "OPPs";
    t1.salary = 100.00;

    cout << "Name of Teacher 1: " << t1.name << endl;
    cout << "Department of Teacher 1: " << t1.department << endl;
    cout << "Subject of Teacher 1: " << t1.subject << endl;
    cout << "Salary of Teacher 1: " << t1.salary << endl;

    return 0;
}