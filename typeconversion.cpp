#include<iostream>
using namespace std;

class haziq{
    public:
    string str;
    haziq (string s):str(s){}

    operator string(){
        return str;
    }
    
};

int main()
{string s="mohammed haziq";
//object to string
haziq str1=s;
cout<<str1.str<<endl;
//string to object
string s2=str1;
cout<<s2<<endl;

    
    return 0;
}
