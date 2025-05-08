/*
armstrong number
*/


#include <iostream>

using namespace std;

bool armstrong(int ,int);
int main() 
{
	
	int result, num=0;
    
	//if (result == num)
	if(armstrong(num))
		cout << num << " is an Armstrong number." << endl;
	else
		cout << num << "is not an Armstrong number." << endl;

	return 0;
}




bool armstrong(int num,int n)
{
	int originalNum, remainder, result = 0, n = 0;
	cin >> num;

	originalNum = num;


	while (originalNum != 0) {
		originalNum /= 10;
		n++;
	}

	originalNum = num;

	while (originalNum != 0) {
		remainder = originalNum % 10;
		result += pow(remainder, n);
		originalNum /= 10;
	}
	if (result == num)
		true;
	else
		false;
	return num;
}








