/*
 * variables
 * types
 * constants
 * operators
 * basic i/o
 */

// basic structure of a c++ program
#include <sstream>
#include <iostream>
// you can use the below line to refrain from having to type std for standard library calls
using namespace std;
int main ()
{
	std::cout << "Hello world!\n";
	return 0;
}

/*
These are keywords reserved in C++
   alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch, char, char16_t, char32_t, class, compl, const, constexpr, const_cast, continue, decltype, default, delete, do, double, dynamic_cast, else, enum, explicit, export, extern, false, float, for, friend, goto, if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq, nullptr, operator, or, or_eq, private, protected, public, register, reinterpret_cast, return, short, signed, sizeof, static, static_assert, static_cast, struct, switch, template, this, thread_local, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, while, xor, xor_eq
*/

// ignore
int basicsStub () {

// C++ includes the following fundamental data types:
/* characters */
char holdsOneCharacter = 'A'; // at least 8 bits (1 byte)
char16_t isAtLeast16bits = 'B';
char32_t notSmallerThanAbove = 'C'; // 32 bits
wchar_t nameOfVariable = 'D'; // can represent the largest supported character set

/* integers (signed) */
signed char isSameSizeAsChar;
signed short int isNotSmallerThanAbove; // 16 bits
signed int notSmallerThanShort; // 16 bits
signed long int is32bits;
signed long long int is64bits;

/* integers (unsigned) */
unsigned char one;
unsigned short int two;
unsigned int three;
unsigned long int four;
unsigned long long int five; // all same size as signed

/* floating point */
float decimalNumber;
double notLessPrecision; // than above
long double ditto;

/* boolean type */
bool isOnOrOff;

/* data type buffer amounts
 *  8 bit == 2^8  == 256
 * 16 bit == 2^16 == 65,536
 * 32 bit == 2^32 == 4,294,967,296
 * 64 bit == 2^64 == 18,446,744,073,709,551,616
 * minus 1 for counting from 0
 */

// types of data field initialisation 
int x = 0;
int y (1);
//int z{2}; // x==0 y==1 z==2

// used to determine variable type at compilation
int foo = 0;
decltype(foo) bar;  

/*
 * introduction to strings
 */
#include <string>

string isAstringType;
isAstringType = "Funny name for a string.";
cout << isAstringType << endl;

/*
 * constants
 * + some misc. conventions 
 */
long int constants;
constants = 12; // integer
constants = 012; // octal
constants = 0x4b; // hexidecimal
constants = 12u;// u or U is unsigned
constants = 12L;// l or L is long
constants = 12ll;// ll or LL is long long
// note, unsigned can be combined:
constants = 013ul;

// character & string literals are made up of type char
// "string" or 's'
// u is char16_t
// U is char32_t
// L is wchar_t
// u8 is string literal stored in UTF-8
// R is string literal stored raw

// floating points
float constants2 = 3.14e-19; // 3.14 x 10^-19

/*
 * Escape code	Description
	\n	newline
	\r	carriage return
	\t	tab
	\v	vertical tab
	\b	backspace
	\f	form feed (page feed)
	\a	alert (beep)
	\'	single quote (')
	\"	double quote (")
	\?	question mark (?)
	\\	backslash (\)
*/

// you can declare an expression constant and it will not change
const double pi = 3.14;

// preprocessor directive
#define idenfifier value

/*
 * arithmetic operators
+	addition
-	subtraction
*	multiplication
/	division
%	modulo

Compound assignment (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
*/
int a,b,i,n,price=1, units=2;
//expression		equivalent to...
y += x;			y = y + x;
x -= 5;			x = x - 5;
x /= y;			x = x / y;
price *= units + 1;	price = price * (units+1);

//Increment and decrement (++, --)
++x;
x+=1;
x=x+1;

/*
 * you should know...
 * == != >= <= > < ! && ||
operator	short-circuit
&&	if the left-hand side expression is false, the combined result is false (the right-hand side expression is never evaluated).
||	if the left-hand side expression is true, the combined result is true (the right-hand side expression is never evaluated).
*/
if ( (i<10) && (++i<n) ) { return 1; }

// Conditional ternary operator ( ? )
int c = 7==5 ? 4 : 3;     // evaluates to 3, since 7 is not equal to 5.
c = 7==5+2 ? 4 : 3;   // evaluates to 4, since 7 is equal to 5+2.
c = 5>3 ? a : b;      // evaluates to the value of a, since 5 is greater than 3.
c = a>b ? a : b;      // evaluates to whichever is greater, a or b.  

/*
 * bitwise  operators ( &, |, ^, ~, <<, >> )
&	AND	Bitwise AND
|	OR	Bitwise inclusive OR
^	XOR	Bitwise exclusive OR
~	NOT	Unary complement (bit inversion)
<<	SHL	Shift bits left
>>	SHR	Shift bits right
*/

//Explicit type casting operator
float f = 3.14;
i = (int) f;

// size of
i = sizeof (char);

return 0;
}

/*
 * basic input and output
 */

void stdInAndOut ()
{
	// standard in
if ( 1 )
{
	int i;
	cout << "Please enter an integer value: ";
	cin >> i;
	cout << "The value you entered is " << i;
	cout << " and its double is " << i*2 << ".\n";
}
	// cin and strings
if ( 1 )
{
	string mystr;
	cout << "What's your name? ";
	getline (cin, mystr);
        cout << "Hello " << mystr << ".\n";
	cout << "What is your favorite team? ";
	getline (cin, mystr);
	cout << "I like " << mystr << " too!\n";
}
	// stringstream
if ( 1 )
{
  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
}
}
