#include <iostream>
using namespace std;

/*
Static Keyword -
               Static Variables In Class:
                                 In a class are created & initialised once. They are shared by all the objects of the class.
 */

class ABC
{
public:
  ABC()
  {
    cout << "constructor \n";
  }

  ~ABC()
  {
        cout << "destructor \n";

  }
};

int main()
{

 cout << "Object: \n";

if (true)
{
   ABC obj; // without static this object will be destroy after this if block.
}

    cout << "\nStatic Object: \n";


if (true)
{
   static ABC obj; // with static this object will persist in memory till the end of the main().
}

    cout << "End of the main function \n";

    return 0;
}