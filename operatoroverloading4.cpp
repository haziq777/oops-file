#include<iostream>
#include<stdlib.h>

using namespace std;
class haziq
{
	string name;
	int age;
public:
	haziq()
	{
		cout<< "Constructor is called\n" ;
	}
	haziq(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void display()
	{
		cout<< "Name:" << name << endl;
		cout<< "Age:" << age << endl;
	}
	void * operator new(size_t size)
	{
		cout<< "Overloading new operator with size: " << size << endl;
		void * p = ::operator new(size);
		
	
		return p;
	}

	void operator delete(void * p)
	{
		cout<< "Overloading delete operator " << endl;
		free(p);
	}
};

int main()
{
	haziq * p = new haziq("haziq", 24);

	p->display();
	delete p;
    return 0;
}
