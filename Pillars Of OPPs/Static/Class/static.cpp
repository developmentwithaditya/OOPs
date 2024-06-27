#include <iostream>
using namespace std;

/*
Static Keyword -
               Static Variables In Class:
                                 In a class are created & initialised once. They are shared by all the objects of the class.
 */

class A
{
public:
    int x;

    void increment_X()
    {
        x++;
    }
};

int main()
{
    A obj, obj2;
    obj.x = 100;
    obj2.x = 200;
    cout << "x = " << obj.x << endl;
    cout << "x = " << obj2.x << endl;

    return 0;
}