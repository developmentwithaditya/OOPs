#include <iostream>
#include <string>
using namespace std;

/* Constructor -
                       Special method invoked automatically at the time of object creation. Used for initialization.
    Properties of Constructor -
                                        Same name as Class
                                        Constructor doesn't have a return type
                                        Only called once (automatically), at object creation
                                        Memory allocation happens when Constructor is called
*/

class Teacher
{
    // Access Modifier
private:
    float salary;

public:
    // Constructor - Non-Parameterised
    Teacher()
    {
        // Initialzation
        department = "Computer Science"; // This is set property of department = Computer Science when a object created.
        cout << "Hey, I am Constructor called by Teacher objects \n";
    }
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
    Teacher t1;
    Teacher t2;

    t1.name = "Adi";
    t1.subjects = "OPPs";
    t1.set_Salary(2500);

    cout << "Name of Teacher 1: " << t1.name << endl;
    cout << "Department of Teacher 1: " << t1.department << endl;
    cout << "Subject of Teacher 1: " << t1.subjects << endl;
    cout << "New salary of Teacher 1: " << t1.get_Salary() << endl;

    return 0;
}