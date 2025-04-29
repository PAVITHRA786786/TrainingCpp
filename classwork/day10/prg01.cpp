#include<iostream>
/*
1.if(cond)
{
block of statements;
}
*/

using namespace std;

int main()
{
	/*int phonecharge;
	cout << "the browsing details:" << endl;
	cout << " open browser " << endl;
	cout << "battery details:" << endl;
	if (phonecharge == 0)
	{
		cout << "Charge the phone" << endl;
	}
	cout<< "Phone is charged" << endl;

	return 0;*/
	int batteryStatus,mobileStatus;
	cout << "Enter the mobile status (1/0): " << endl;
	cin >> mobileStatus;
	
	if (mobileStatus == 1)
	{
		cout << "Enter the battery status (0-100): ";
		cin >> batteryStatus;
		if (batteryStatus <= 10)
		{
			cout << "put the phone to charge" << endl;
		}
		cout << "open browser" << endl;
		cout << "check today's live news" << endl;
	}
	else
	{
		cout<<"powering on the mobile" << endl;
		//mobileStatus = 1;
		cout << "Enter the mobile status (1/0): " << endl;
		cin >> mobileStatus;
	//	cout << "Enter the battery status (0-100): ";
		//cin >> batteryStatus;
		if (mobileStatus == 1) {
			cout<<"battery status is (0-100)" << endl;
			cin >> batteryStatus;
			if (batteryStatus <= 10)
			{
				cout << "put the phone to charge" << endl;
			}	
			cout<<"open browser" << endl;	
			cout<< "check today's live news" << endl;
		}
		//{
			//cout << "Enter the battery status (0-100): ";
		//	cin >> batteryStatus;
		//}
		else
		{
			cout << "powering off the mobile" << endl;
			cout << "mobile status (1/0): " << endl;
			cin >> mobileStatus;
			if (mobileStatus == 1)
				cout << "Enter the battery status (0-100): ";
			cin >> batteryStatus;
		
		if (batteryStatus <= 10)
		{
			cout << "put the phone to charge" << endl;
		}
		cout << "open browser" << endl;
		cout << "check today's live news" << endl;
	}
	return 0;
}