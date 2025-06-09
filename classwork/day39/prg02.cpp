#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

class Emp
{
public:
	Emp(int id,string name):id(id),name(name){}
	void disp() {
		cout << "ID: " << id << "\tName: " << name << endl;
	}
private:
	int id;
	string name;

};
int main()
{
	
	Emp e1(101, "abc1");
	Emp e2(102, "abc2");
	std::map<int, vector<Emp>>mapEmp;

	vector<Emp> v;
	v.push_back(e1);
	v.push_back(e2);

	mapEmp[1] = v;

	auto i = mapEmp.begin();
	cout << i->first << endl;//points to the key
	auto ele = i->second; //points to the value i.e now here vector
	for (auto j : ele)
		j.disp();
		
	
	
	return 0;
}


/*
Emp ={
101:{"abc1","m",10001},
102:{"abc2","f",10002},
103:{'abc3""m",10003}
*/





