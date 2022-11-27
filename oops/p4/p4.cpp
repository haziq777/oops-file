#include<bits/stdc++.h>
using namespace std;

class Bookshop
{
    public:

    virtual void read()
    {
        cout<<"Bookshop\n"
            <<"The object has no feature of reading books\n";
    }

    virtual void show()
    {
        cout<<"Bookshop\n"
            <<"The object has no feauture to show videos\n";
    }
};

class Books : public Bookshop
{
    public:
    int pages;
    Books()
    {
        cout<<"Enter number of pages :\t";
        cin>>pages;
    }
    void read()
    {
        cout<<"The book has "<<pages<<" number of pages\n";
    }
};

class Videos : public Bookshop
{
    public:
    int duration;
    Videos()
    {
        cout<<"Enter duration of videos :\t";
        cin>>duration;
    }
    void show()
    {
        cout<<"The total duration of the Video tape is "<<duration<<"\n";
    }
};


int main()
{
    Bookshop *bkshp;
    Books b;

    bkshp = &b;
    bkshp->read();
    bkshp->show();
    cout<<"\n***********\n";
    Videos v;
    bkshp = &v;
    bkshp->read();
    bkshp->show();

}