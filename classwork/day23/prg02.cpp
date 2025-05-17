#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int* ptr = (int*)malloc(sizeof(int) * 3);
	//int* ptr = (int*)malloc(sizeof(int) * 0);//heap error corruption detected
	if(ptr!=NULL) {
	int* temp = ptr;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;

	ptr = temp;
	for (int i = 0;i < 3;i++)
		cout << *ptr++ << endl;

	cout << endl;

	ptr = temp;
	free(ptr);
}
else
cout << "memory failed to allocate " << endl;
	/*cin >> *ptr;
	ptr++;
	ptr = temp;
	for (int i = 0;i < 3;i++)
		cout << *ptr++ << endl;*/

	/* valgrind=mem leaks */

	return 0;
}