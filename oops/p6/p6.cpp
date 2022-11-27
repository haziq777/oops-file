#include<bits/stdc++.h>
using namespace std;

class Complex
{
    public:
    double r,c;

    Complex(){};
    Complex(double r, double c)
    {
        this->r = r;
        this->c = c;
    }

    void operator+= (Complex &obj)
    {
        r = r + obj.r;
        c = c + obj.c;
    }

    void operator-= (Complex &obj)
    {
        r -= obj.r;
        c -= obj.c;
    }
    
    void operator*= (Complex &obj)
    {
        r = (r*obj.r) - (c*obj.c);
        c = (r*obj.c) + (c*obj.r);
    }

    void operator/= (Complex &obj)
    {   
        double d = (obj.r*obj.r) + (obj.c*obj.c);
        r = (double)((r*obj.r) - (c*obj.c))/d;
        c = (double)(c*obj.r) - (r*obj.c)/d; 
    
    }

    void show()
    {
        cout<<r<<" "<<c<<" i\n";
    }

    friend ostream & operator << (ostream &out, const Complex &c);

};

ostream & operator << (ostream &out, const Complex &c)
{
    out << c.r<<" "<<c.c<<" i\n";
    return out;
}

int main()
{   
    double r,c;
    cout<<"Enter number 1 \n";
    cout<<"Enter Real part :\t";
    cin>>r;
    cout<<"Enter Complex part :\t";
    cin>>c;
    Complex c1(r,c);
    cout<<"Your Number :\t"<<c1<<"\n\n";
    
    cout<<"Enter Number 2 \n";
    cout<<"Enter Real part :\t";
    cin>>r;
    cout<<"Enter Complex part :\t";
    cin>>c;
    Complex c2(r,c);

    cout<<"Addition :\t";
    c1+=c2;
    cout<<c1;

    cout<<"Subtraction :\t";
    c1-=c2;
    cout<<c1;
    
    cout<<"Multiplication :\t";
    c1*=c2;
    cout<<c1;

    cout<<"Division :\t";
    c1/=c2;
    cout<<c1;

}