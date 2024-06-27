#include <iostream>
#include <string>
using namespace std;

/* Access Modifiers -
                        It is used to protect the data access from outside of the class.
    Three types pf access modifiers -
                                        private : data & methods accessible inside class.
                                        protected: data & methods accessible inside class & to its derived class.
                                        public: data & methods accessible to everyone.
Note: By-default all c++ class data & methods are private.
*/

class Teacher
{
    // Access Modifier
private:
    float salary;

public:
    // Properties that associated with Teacher.
    string name;
    string department;
    string subjects;

    // Methods that associated with Teacher.
    void change_Dept(string newdepartment)
    {
        department = newdepartment;
    }

    // We can inderectly access & modify private data "salary" using getter & setter.

    // setter
    void set_Salary(float newsalary)
    {
        salary = newsalary;
    }

    // getter
    float get_Salary()
    {
        return salary;
    }
};

int main()
{
    // Objects of class Teacher

    Teacher t1;
    t1.name = "Adi";
    t1.department = "Computer Science";
    t1.subjects = "OPPs";
    // t1.salary = 1000.00; // error by access modifier
    t1.set_Salary(2500);

    cout << "Name of Teacher 1: " << t1.name << endl;
    cout << "Department of Teacher 1: " << t1.department << endl;
    cout << "Subject of Teacher 1: " << t1.subjects << endl;
    // cout << "Salary of Teacher 1: " << t1.salary << endl;
    cout << "New salary of Teacher 1: " << t1.get_Salary() << endl;

    return 0;
}