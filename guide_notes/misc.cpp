#include <iostream>
#include "example.h"
using namespace std;
// implicit type conversions with a class
class A {};

class B {
public:
  // conversion from A (constructor):
  B (const A& x) {}
  // conversion from A (assignment):
  B& operator= (const A& x) {return *this;}
  // conversion to A (type-cast operator)
  operator A() {return A();}
};

int main ()
{
  A foo;
  B bar = foo;    // calls constructor
  bar = foo;      // calls assignment
  foo = bar;      // calls type-cast operator

// try / catch block for exception handling 
  try
  {
    throw 20;
  }
  catch (int e)
// catch (exception& e)
  {
    cout << "An exception occurred. Exception Nr. " << e << '\n';
  }

  return 0;
}

// type casting (int *) ex.

// other types of casting: 
/*
dynamic_cast
static_cast
reinterpret_cast
const_cast
typeid
*/


