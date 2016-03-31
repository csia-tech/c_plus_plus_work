#include <iostream>
#include <sstream>
#include <array>
#include <string>
#include <vector>
#include "functions.h"
using namespace std;
#include <openssl/md5.h>
#include "sha256.h"
using std::string;
using std::cout;
using std::endl;
int md5();
int func_test (); 
int main(int argc, char *argv[])
{
    string input = "grape";
    string output1 = sha256(input);
    func_test(); 
    cout << "sha256('"<< input << "'):" << output1 << endl;
    return 0;
}
int func_test ()
{
	unsigned int const key = 3;
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
	md5();
	return key;
}
int md5 ()
{
	unsigned char digest[MD5_DIGEST_LENGTH];
	char string[] = "happy";
	MD5((unsigned char *)&string, strlen(string), (unsigned char*)&digest);
	char mdString[33];

	for(int i = 0; i < 16; i++)
		sprintf("&mdString[i*2], "%02x", (unsigned int)digest[i]);
	printf("md5: %s\n", mdString);
	return 0;
}
