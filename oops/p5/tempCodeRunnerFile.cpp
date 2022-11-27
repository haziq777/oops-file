#include<bits/stdc++.h>
using namespace std;

class AccountBook
{
    public:
    string name;
    int id;
    AccountBook()
    {
        cout<<"Enter name :\t";
        cin>>name;
        cout<<"Enter id :\t";
        cin>>id;
    }
    
    bool operator[] (int id)
    {
        return this->id == id;
    }

    bool operator[] (string name)
    {
        return this->name == name;
    }
};

int main()
{   
    int n;
    cout<<"Enter number of accounts :\t";
    cin>>n;
    AccountBook ab[n];
    int id;
    cout<<"Enter Id to search for :\t";
    cin>>id;
    int flag = 0;
    for(int i=0;i<n;i++)
    {   
        if(ab[i][id])
        {
            cout<<"Record exists\n";
            cout<<"Name : "<<ab[i].name<<"\n";
            flag = 1;
            break;
        }   
    }

    if(!flag)
    {
        cout<<"Record not found\n";
    }
    string name;
    cout<<"Enter Name to Search for :\t";
    cin>>name;
    flag = 0;
    for(int i=0;i<n;i++)
    {
        if(ab[i][name])
        {
            cout<<"Record exists\n";
            cout<<"Id : "<<ab[i].id<<"\n";
            flag = 1;
            break;
        }
    }
    if(!flag)
    {
        cout<<"Record not found\n";
    }
}