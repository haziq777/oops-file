#include<bits/stdc++.h>
using namespace std;

class Dollar
{
    public:
    float amount;
    Dollar()
    {

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

class Rupee
{
    public:
    float amount;
    Rupee()
    {

    }

    Rupee (Dollar &d)
    {
        amount = d.amount*60;
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


int main()
{
    Rupee r1;
    Dollar d2;
    d2.addMoney(100);

    d2.display();
    r1 = d2;
    r1.display();

}