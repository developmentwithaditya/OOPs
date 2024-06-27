#include <iostream>
#include <string>
using namespace std;

/*
  Shallow Copy -
                A shallow copy of an obj copies all of the member value from one obj to another.
    Deep Copy -
                A deep copy, on the otherhand, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.
    Note: Deep copy constructor doesn't create by compiler.
 */

class Student
{
public:
    string name;
    float *cgpaPrt;

    Student(string name, float cgpa)
    {
        this->name = name;
        cgpaPrt = new float;
        *cgpaPrt = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPrt = new float; // deep copy
        this->cgpaPrt = obj.cgpaPrt;
    }

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPrt << endl;
    }
};

int main()
{
    Student s1("Aditya Choudhary", 8.5);
    Student s2(s1); // obj s2 copies all the data from obj s1
    s1.getinfo();
    s2.name = "Adi Choudhary";
    *(s2.cgpaPrt) = 9.3;
    s2.getinfo();

    return 0;
}