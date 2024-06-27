#include <iostream>
using namespace std;

/*
Abstract Class -
                Is a blueprint that tell what other derived classes looks like.
Using Abstract Classes -
                        This is the actuall blueprint.
                        They cannot be instantiated and are meant to be inherited.
                        Are provide a base class from which other classes can be derived.
 */

// Abstract class Shape defined a pure virtual() that should be used by derived classes.
class Shape
{
public:
   virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
  void draw()
  {
    cout << "Drawing a circle \n";
  }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}