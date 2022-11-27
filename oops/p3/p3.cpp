#include<bits/stdc++.h>
using namespace std;

class Time
{   
    public:

    int hrs;
    int min;

    Time()
    {
        cout<<"Enter hours :\t";
        cin>>hrs;
        cout<<"Enter mins :\t";
        cin>>min;
    }

    static void add(Time &t1, Time &t2);
    
};

void Time :: add (Time &t1, Time &t2)
{
    int total_min = t1.min + t2.min;
    int total_hrs = t1.hrs + t2.hrs + (total_min/60);
    total_min %= 60;
    cout<<"Total Time :\t "<<total_hrs<<" hours : "<<total_min<<" minutes\n";
}

int main()
{
    Time t1,t2;
    Time::add(t1,t2);

}