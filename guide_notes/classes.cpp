#include <iostream>
#include <string>
using namespace std;
// class format:
int defconex();
class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    Rectangle ();
    void set_values (int,int);
    int area() {return width*height;}
};
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}
//constructor
Rectangle::Rectangle (int a, int b) {
	  width = a;
	  height = b;
}
Rectangle::Rectangle() {
	//overloaded constructor
}
int test () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}
//ignore
int main ()
{
	defconex();
	test();
	return 0;
}
/*
expression	can be read as
*x	pointed to by x
&x	address of x
x.y	member y of object x
x->y	member y of object pointed to by x
(*x).y	member y of object pointed to by x (equivalent to the previous one)
x[0]	first object pointed to by x
x[1]	second object pointed to by x
x[n]	(n+1)th object pointed to by x
*/

// operators can be overloaded
/*
+    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
<<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new 
delete    new[]     delete[]

// using above example(prototype, in class):
Rectangle operator + (const Rectangle&);
// method defenition
Reactangle Rectangle::operator+ (const Rectangle& param) {
	return 0;
}
*/

// the this keyword is a pointer to the object whoses method is executing

// static keyword is for setting something specific to an entire class type

// const set an item to read only when accessed outside its class

// you can use the template framework when creating classes and there is a thing called 
// template specialization

/*
notes:
Member function		typical form for class C:
Default constructor	C::C();
Destructor		C::~C();
Copy constructor	C::C (const C&);
Copy assignment		C& operator= (const C&);
Move constructor	C::C (C&&);
Move assignment		C& operator= (C&&);
*/


class Example3 {
    string data;
  public:
    Example3 (const string& str) : data(str) {}
    Example3() {}
    const string& content() const {return data;}
};

int defconex () {
  Example3 foo;
  Example3 bar ("Example");

  cout << "bar's content: " << bar.content() << '\n';
  return 0;
}
// notes for redefining/overloading implicit members/methods
/*
Member function	implicitly defined:	default definition:
Default constructor	if no other constructors	does nothing
Destructor	if no destructor	does nothing
Copy constructor	if no move constructor and no move assignment	copies all members
Copy assignment	if no move constructor and no move assignment	copies all members
Move constructor	if no destructor, no copy constructor and no copy nor move assignment	moves all members
Move assignment	if no destructor, no copy constructor and no copy nor move assignment	moves all members
*/

// the friend keyword allows for accessing private & protected members from another class
// use by including this line in the class template
// friend class name-of-friend;



/* 

One of the key features of class inheritance is that a pointer to a derived class is type-compatible 
with a pointer to its base class. Polymorphism is the art of taking advantage of this simple but powerful 
and versatile feature.

*/
