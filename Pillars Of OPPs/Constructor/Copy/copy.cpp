#include <iostream>
#include <string>
using namespace std;

/* Copy Constructor-
                    Special Constructor (default) used to copy properties of one object into another.
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

    // copy constructor
    Teacher(Teacher &orgobj)
    {
        cout << "I am custom copy constructor \n";
        this->name = orgobj.name;
        this->department = orgobj.department;
        this->subjects = orgobj.subjects;
        this->salary = orgobj.salary;
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

    Teacher t2(t1); // object t2 is copy all the properties of t1.
    t2.getInfo();

    return 0;
}