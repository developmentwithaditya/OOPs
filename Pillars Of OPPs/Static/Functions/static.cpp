#include <iostream>
using namespace std;

/* Static Keyword -
                Static Variables In Function:
                                 Variables declared as static in a function are created & initialised once for the lifetime of the program.
 */

void fun()
{
   static int x = 0; // init statement will only run once.
    cout << "x = " << x << endl;
    x++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}