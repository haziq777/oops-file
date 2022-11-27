#include<bits/stdc++.h>
using namespace std;

class Rupee
{
    public:
    float amount;
    Rupee()
    {

    }

    void addMoney(float val)
    {
        amount = val;
    }

    void display()
    {
        cout<<"Rs "<<amount<<"\n";
    }    

};

class Dollar
{
    public:
    float amount;
    Dollar()
    {

    }

    Dollar (Rupee &r)
    {
        amount = r.amount/60;
    }

    void addMoney(float val)
    {
        amount = val;
    }

    void display()
    {
        cout<<"$ "<<amount<<"\n";
    }

};


int main()
{
    Rupee r2;
    Dollar d1;
    r2.addMoney(100);

    r2.display();
    d1 = r2;
    d1.display();

}