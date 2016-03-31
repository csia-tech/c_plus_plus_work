#include <iostream>
#include <array>
using namespace std;

// function prototype
int pfunc ();

int main ()
{
	int array [] = { 1, 2, 3 };
	int multiD [2][2];

	multiD[1][0] = array[2];

	return 0;
}

void builtINarray ()
{
  int myarray[3] = {10,20,30};

  for (int i=0; i<3; ++i)
    ++myarray[i];

  for (int elem : myarray)
    cout << elem << '\n';
}
// uses <array> include
void containerArray ()
{
  array<int,3> myarray = {10,20,30};

  for (int i=0; myarray.size(); ++i)
    ++myarray[i];

  for (int elem : myarray)
    cout << elem << '\n';
}

/*
 * pointers
 * address of operator
 * &
 * dereference operator
 * *
 */
void pointers ()
{
	int num = 0;
	int * pNum;
	pNum = &num;
	if ( ! pNum ) cout << "Num is zero.\n";

  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20

// pointer to array
  int numbers[5];
  int * p;
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";

// null pointers point to nothing
	int * nothing = nullptr;
	
	pfunc();
}
/*
The void type of pointer is a special type of pointer. In C++, void represents the absence of type. Therefore, void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties).
*/

// pointers to functions
int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}

int pfunc ()
{
  int m,n;
  int (*minus)(int,int) = subtraction;

  m = operation (7, 5, addition);
  n = operation (20, m, minus);
  cout <<n;
  return 0;
}

// dynamic memory is simple in c++
void dynmem ()
{
	int * memory;
	memory = new int [3];
	// should check for null pointers
	memory = new (nothrow) int [5]; 
	// use if you don't wanna have exceptions thrown
	delete[] memory;
}

void structures ()
{
	// access members with .	
	struct product {
		int weight;
		double price;
	} apple, banana, melon;
	// creates a structure of type product with two members weight and price, then declares three of them

	// unions allow one portion of memory to be accessed as different data types
	union mytypes_t {
		char c;
		int i;
		float f;
	} mytypes;
	
	// enumerators create a type that can only consist of listed values
	enum onetwoT { one, two } twoone;
	twoone = one;
}
