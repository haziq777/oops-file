#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    Animal(){
        cout<<"Constructor of Animal\n";
    }
    virtual ~Animal()
    {
        cout<<"Destructor of Animal Called\n";
    }

    virtual void move() = 0;    // pure virtual function
};

class Dog : public Animal
{
    public:
    string name;
    Dog()
    {
        cout<<"Constructor of Dog called\n";
    }
    void putName()
    {
        cout<<"Enter name :\t";
        cin>>name;
    }

    virtual ~Dog()  // virtual Destructor
    {
        cout<<"Destructor of Dog called\n";
    }
    void move() // derived class over riding virtual function.
    {
            cout<<"A dog moves by walking.\n";
    }
    
    void showName()
    {
        cout<<"Hi We are "<<name<<"\n";
    }

    friend Dog operator+ (Dog& , Dog& );
    
};

Dog operator+ (Dog &d1, Dog &d2)
{
    Dog d;
    d.name = d1.name + " and " +d2.name;
    return d;
}

int main()
{
    Animal *animal;
    Dog dog;
    Dog d1, d2,d3;
    d1.putName();
    d2.putName();

    d3 = d1+d2;
    d3.showName();  // Overloading through friend function

    delete &d1;
    delete &d2;
    delete &d3;

    animal = &dog;  // animal is a pointer to derived class object.
    animal->move();
    delete animal; // virtual Destructor
}