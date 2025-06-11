#include<iostream>
#include <fstream>
#include <iterator>
#include<list>
#include <algorithm>
using namespace std;


class Employee
{
    int id;
    string name;
public:
    Employee() :id(0), name("") {}
    Employee(int id, string name) :id(id), name(name) {}
    Employee(const Employee& others) {
        this->id = others.id;
        this->name = others.name;
    }
    void display() { cout << "ID: " << id << "\tName: " << name << endl; }
    int getId()const { return id; }
    string getName()const { return name; }
    void setId() { this->id = id; }
    void setName() { this->name = name; }
    friend istream& operator >> (istream& is, Employee& e)
    {
        is >> e.id >> e.name;
        return is;
    }
    friend ostream& operator << (ostream& os, Employee& e)
    {
        os << "ID: " << e.id << "\tName: " << e.name << endl;
        return os;
    }

};

int main()
{

    std::istream_iterator<Employee> inIt(std::cin);
    std::istream_iterator<Employee> endIt;

    list<Employee> emp;

    while (inIt != endIt)
    {
        emp.push_back(*inIt);
        ++inIt;
    }

    for (auto e : emp)
        //e.display();
        cout << e;


    return 0;
}































