#include <iostream>
using namespace std;

/*
Polymorphism -
                Is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
Example:
        Function Overloading.
 */

class Print
{
public:
    void show(int x)
    {
        cout << "int x = " << x << endl;
    }

    void show(char ch)
    {
        cout << "char ch = " << ch << endl;
    }
};

int main()
{
    Print p1;
    p1.show(22);
    p1.show('a');
    return 0;
}