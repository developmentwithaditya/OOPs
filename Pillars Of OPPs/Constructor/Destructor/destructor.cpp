#include <iostream>
#include <string>
using namespace std;

/* Destructor-
                Used to Deallocate the objects memory.
    Note: Destructor invoked by default if you dont create your own.
    Note: Destructor only deallocate static memory.
*/

class Student
{
public:
    string name;
    float *cgpaPrt;

    Student(string name, float cgpa)
    {
        this->name = name;
        cgpaPrt = new float; // Dynamically allocated memory for cgpaPrt in heap
        *cgpaPrt = cgpa;
    }

    // destructor for class Student
    ~Student()
    {
        cout << "I am delete every objects you created! \n";
        delete cgpaPrt; // deleting Dynamically allocated memory of cgpaPrt
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
    s1.getinfo();
    return 0;
}