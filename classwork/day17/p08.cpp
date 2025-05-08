/*
print all the natural numbers from 1 to 10 without loops or goto and having only not more than 6 line of code 
exculding includes and declarations .
And also not to use user defined recursive function.
*/

#include<iostream>

using namespace std;

int main()
{
	static int n = 1;
	if (n == 10)
		exit(EXIT_SUCCESS);     //exit(0);   
	cout << n++ << endl;
	main();
	return EXIT_SUCCESS;  //return 0;
}