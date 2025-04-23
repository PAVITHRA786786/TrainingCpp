#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {


	/*cout << argc << endl;
	for (int i = 0;i < argc;i++)
		cout << "argv[" << i << "]" << argv[i] << endl;
	return 0;
}*/
	//int res = atoi(argv[1]) + atoi(argv[2]);
	//cout << "res: " << res << endl;
	cout << argv[0] << endl;
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	cout << argv[3] << endl;
	cout << "1st char " << argv[1][0]<<endl;
	cout << "2nd char " << argv[1][1]<<endl;
	int res = 0;

	switch (argv[1][0])
	{
	case  '+':
	    res = atoi(argv[2]) + atoi(argv[3]);
		cout << "res: " << res << endl;
		break;
	case '-':
		res = atoi(argv[2]) - atoi(argv[3]);
		cout << "res: " << res << endl;
		break;

	}

	return 0;

}