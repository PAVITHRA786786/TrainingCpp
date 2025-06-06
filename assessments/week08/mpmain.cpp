#include <iostream>
#include <vector>
//#include "mpp.h"
#include "log.h"

using namespace std;

int main()
{
	try {
		Logger logger("instructions.txt");
		
		//Microprocessor <string> MP();
		int AX = 50, BX = 30, CX = 0, DX = 0;
		static int programCounter = 00;
		programCounter++;
		cout << "Recevied Interrupt " << endl;
		cout << "snapshot of the processor " << endl;
		cout << "AX: " << AX << endl;
		cout << "BX: " << BX << endl;
		cout << "CX: " << CX << endl;
		cout << "DX: " << DX << endl;

	//	Mp m;
		//m.display();
	}
	
	catch (exception& e)
		{
			cout << e.what();
		}

	return 0;
}