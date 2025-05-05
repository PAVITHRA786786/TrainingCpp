/*
print the predefined macros
*/

#include<iostream>

using namespace std;

int main()
{
	cout<<"maximum value of int: "<<INT_MAX<<endl;
	cout << "maximum value of unsigned int: " << UINT_MAX << endl;
	cout << "maximum value of bool: " << true << endl;
	cout << "maximum value of char: " << CHAR_MAX << endl;
	cout << "maximum value of signed char: " << SCHAR_MAX << endl;
	cout << "maximum value of unsigned char: " << UCHAR_MAX << endl;
	cout << "maximum value of char8_t: " << UCHAR_MAX << endl;
	cout << "maximum value of char16_t: " << UINT_LEAST16_MAX << endl;
	cout << "maximum value of char32_t: " << UINT_LEAST32_MAX << endl;
	cout << "maximum value of short: " << SHRT_MAX << endl;
	cout << "maximum value of unsigned short: " << USHRT_MAX << endl;
	cout << "maximum value of long: " << LONG_MAX << endl;
	cout << "maximum value of unsigned long: " << ULONG_MAX << endl;
	cout << "maximum value of long long: " << LLONG_MAX << endl;
	cout << "maximum value of unsigned long long: " << ULLONG_MAX << endl;
	cout << "maximum value of float: " << FLT_MAX << endl;
	cout << "maximum value of double: " << DBL_MAX << endl;
	cout << "maximum value of long double: " << LDBL_MAX << endl;
	cout << "maximum value of wchar_t: " << WCHAR_MAX << endl;
	cout << "maximum value of size_t: " << SIZE_MAX << endl;
	cout << "maximum value of ptrdiff_t:" << PTRDIFF_MAX << endl;
	return 0;
}