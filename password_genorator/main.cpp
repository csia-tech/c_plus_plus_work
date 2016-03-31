#include <iostream>
#include <sstream>
#include <array>
#include <string>
#include "functions.h"
using namespace std;
int main ()
{
	unsigned int const key = NUMBER;
	std::string buffer1, buffer2, buffer3;
	cout << "Enter passphrase one:\n";
	cin >> buffer1;
	cout << "Enter passphrase two:\n";
	cin >> buffer2;
	cout << "Enter password:\n";
	cin >> buffer3;
	const char *encode1 = buffer1.c_str();
	const char *encode2 = buffer2.c_str();
	const char *encode3 = buffer3.c_str();
	modify(buffer1, 0, key, buffer1.size() );
	modify(buffer2, 0, key, buffer2.size() );
	modify(buffer3, 0, key, buffer3.size() );
	buffer1 = encode( encode1, (buffer1.size()-1) );
	buffer2 = encode( encode2, (buffer2.size()-1) );
	buffer3 = encode( encode3, (buffer1.size()-1) );
	cout << "Code:\n" << buffer1 << buffer2 << buffer3 << "\n";
	return key;
}
