#include <iostream>
#include <string>
using namespace std;

/* Constructor (Parametrised)-
                                Can take parameter as input.
    Note: A class has multiple constructor(Constructor Overloading) with different parameters.
*/

class Teacher
{
private:
    float salary;

public:
    // Constructor - Parameterised
    Teacher(string n, string dept, string sub, float sal)
    {
        name = n;
        department = dept;
        subjects = sub;
        salary = sal;
    }

    string name;
    string department;
    string subjects;

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