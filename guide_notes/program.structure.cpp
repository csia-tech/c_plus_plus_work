#include <iostream>
using namespace std;
int main ()
{// you know the rest, just leaving this here for reference.
	for ( int x = 0; x < 10; x++ )
	{
		cout << "Hello world.\n";
		switch (x) {
			case 1:
				cout << "fuck one";
				break;
			case 2:
				continue;
			case 3:
			default:
				cout << "no one";
		}
	}
	return 0;
}
inline void pointerFunction ( int &example ) 
{
	if ( example ) cout << "inline keyword tells the compiler to place the code directly into the call of this function, instead of creating overhead for pushing & popping the stack then jumping.";
}
inline int pointerFunction ( int &example, char overloadedFunction )
{
	//small example of function overloads
	return 0;
}

// template example
template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}
// usage
void temping ()
{// T replaced with type defined by call
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  cout << k << '\n';
  cout << h << '\n';
}

// you know scope

namespace myNamespace
{
	  int a, b;
}
// keyword using introduces a name into the current declarative region (such as a block), thus avoiding the need to qualify the name

