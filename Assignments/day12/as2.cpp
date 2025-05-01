/*
TC01
i/p
s1 = "ABCDE"
s2 = "abcde"
o/p
s3 = AaBbCcDdEe

TC02
i/p
s1 = "ABCDEFGH"
s2 = "abcde"
o/p
s3 = AaBbCcDdEeFGH

TC03
i/p
s1 = "ABCDE"
s2 = "abcdefgh"
o/p
s3 = AaBbCcDdEefgh
*/


#include <iostream>
#include <string>

using namespace std;

string mergeStrings(string s1, string s2);

int main() {
	string s1, s2;

	cout << "Enter first string: ";
	cin >> s1;
	cout << "Enter second string: ";
	cin >> s2;

	string mergedString = mergeStrings(s1, s2);

	cout << "Merged string: " << mergedString << endl;

	return 0;
}

string mergeStrings(string s1, string s2)
{
	string result;
	int len1 = s1.length();
	int len2 = s2.length();
	int minLength = min(len1, len2);

	for (int i = 0; i < minLength; i++) {
		result += toupper(s1[i]);
		result += tolower(s2[i]);
	}

	if (len1 > minLength) {
		result += s1.substr(minLength);
	}
	else if (len2 > minLength) {
		result += s2.substr(minLength);
	}

	return result;
}
