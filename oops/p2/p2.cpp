#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    string address;

    Person()
    {
        cout<<"Enter Name :\t";
        cin>>name;
        cout<<"Enter Address :\t";
        cin>>address;
    }

};

class Student : public Person
{
    public:
    float marks;
    Student()
    {
        cout<<"Enter marks :\t";
        cin>>marks;
    }

    void show()
    {
        cout<<"Name : "<<name<<"\n"
            <<"Address : "<<address<<"\n"
            <<"Marks : "<<marks<<"\n";
    }

};

class Staff : public Person
{
    public:
    float salary;
    Staff()
    {
        cout<<"Enter Salary :\t";
        cin>>salary;
    }

    void show()
    {
        cout<<"Name : "<<name<<"\n"
            <<"Address : "<<address<<"\n"
            <<"Salary : "<<salary<<"\n";
    }
};

int main()
{
    Student stu;
    cout<<"\nStudent Details \n";
    stu.show();
    cout<<"\n*************\n";
    Staff sta;
    cout<<"\nStaff Details \n";
    sta.show();
}