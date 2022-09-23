#include <iostream>

using namespace std;

class Employee
{
private:                      //data memebers
    int eid;
    string name;

public:                       //function members
    Employee(int e, string n) //constructor
    {
        eid=e;
        name=n;

    }
    int getEmployeeId()
    {
        return eid;
    }

    string getName()
    {
        return name;
    }
};

class FulltimeEmployee: public Employee
{
    private:
    int salary;

    public:
    FulltimeEmployee(int e, string n, int s):Employee(e,n)
    {
        salary=s;
    }

    int getSalary()
    {
        return salary;
    }


};

class ParttimeEmployee: public Employee
{
    private:
    int wage;

    public:
    ParttimeEmployee(int e, string n, int w):Employee(e,n)
    {
        wage=w;
    }

    int getWage()
    {
        return wage;
    }


};
int main()
{
    FulltimeEmployee p1(1,"Rishabh", 15000);
    ParttimeEmployee p2(2,"Ayushi", 5000);

    cout<<"The salary of "<<p1.getName()<<" is "<<p1.getSalary()<<endl;
    cout<<"The salary of "<<p2.getName()<<" is "<<p2.getWage()<<endl;
    return 0;
}
