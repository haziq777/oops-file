#include<bits/stdc++.h>
using namespace std;

class Students
{
    string name;
    string id;
    float marks;
    
    public:

    void read()
    {
        cout<<"Enter name :\t";
        cin>>name;
        cout<<"Enter id :\t";
        cin>>id;
        cout<<"Enter marks :\t";
        cin>>marks;
    }
    
    void show()
    {
        cout<<name<<"\t"<<id<<"\t"<<marks<<"\n";
    }
};
void header()
    {
        cout<<"\nName\tId\tMarks\n";
    }
int main()
{   
    int n;
    cout<<"Enter number of students :\t";
    cin>>n;
    Students s[n];
    for(int i=0;i<n;i++)
    s[i].read();
    header();
    for(int i=0;i<n;i++)
    s[i].show();
}