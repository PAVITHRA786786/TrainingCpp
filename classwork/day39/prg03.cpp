#include <iostream>
#include <map>
#include <vector>
#include <string>



using namespace std;

class Emp
{
public:
    Emp(int id, std::string name) : id(id), name(name) {}
    void disp() const {
        cout << "ID: " << id << "\tName: " << name << endl;
    }
    void setValues() {
        cout << "Enter Details, " << endl;
        cout << "ID: ";cin >> this->id;
        cout << "Name: ";cin >> this->name;
    }
    string getName() const { return this->name; }
    int getId() const { return this->id; }
private:
    int id;
    string name;

};



/*

Emp = {

    101 : {101, "abc1", 'm', 10001},
    102 : {102, "abc2", 'f', 10002},
    103 : {103, "abc3", 'm', 10003}
}

*/

int main()
{
    int id;
    string name;
    map<int, vector<Emp>> vemp;

    for (int i = 0;i < 5;i++)
    {
        cout << "Enter Details of " << (i + 1) << " Employee\n";
        cout << "ID: ";cin >> id;
        cout << "Name: ";cin >> name;
        vemp[id].emplace_back(id, name);
    }

    for (const auto eleEmp : vemp)
    {
        for (const auto emps : eleEmp.second)
        {
            cout << "Employee ID: " << eleEmp.first << "\t";
            //cout << "Name: " << emps.getName() << endl;
            emps.disp();
        }
    }

    cout << "Enter the id to be searched: ";
    cin >> id;
    const auto it = vemp.find(id);
    if (it != vemp.end()) {
        std::cout << "Found Employee " << id << ": " << "\n";

    }
    else
        std::cout << "not found" << std::endl;

    return 0;
}










