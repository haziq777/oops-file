#include<iostream>
#include<conio.h>
using namespace std;
class haziq
{
      public:
                    int MyArray[10][10];
                    int u,v;
      
                    void show();
                    haziq operator +(haziq);
                    haziq operator *(haziq);
                    void read();
};
//+ operator is overloaded
           haziq haziq::operator+(haziq p)
      {
               haziq t;
               t.u=u;
               t.v=v;
               cout<<t.u;
               cout<<t.v;
               for(int i=0;i<t.u;i++)
                    for(int j=0;j<t.v;j++)
                         t.MyArray[i][j]=MyArray[i][j]+p.MyArray[i][j];
                         return t;
      }
//* operator is overloaded
          haziq haziq::operator*(haziq p)
     {
               haziq t;
               t.u=u;
               t.v=p.v;
               for(int i=0;i<t.u;i++)
                    for(int j=0;j<t.v;j++)
                        {
                           t.MyArray[i][j]=0;
                           for(int k=0;k<v;k++)
                                  t.MyArray[i][j]+=MyArray[i][k]*p.MyArray[k][j];
                        }
                                  return t;
       }
           void haziq::read()
       {
              cout<<"Please Enter Size of Matrix like 2 x 2:\n";
              cin>>u>>v;
              cout<<"Please Enter the Elements in the Matrix :\n";
              for(int i=0;i<u;i++)
                   for(int j=0;j<v;j++)
                       cin>>MyArray[i][j];
     }
             void haziq::show()
     {
             for(int i=0;i<u;i++)
                  {
                  for(int j=0;j<v;j++)
                       {
                             cout<<MyArray[i][j]<<"\t";
                            
                        }
                             cout<<"\n";
                  }
     }
             int main()
     {
                haziq object1 ,object2,object3;
                cout<<"Please Enter First Matrix\n";
                object1.read();
                cout<<"Please Enter Second Matrix\n";
                object2.read();
                if((object1.v==object2.v)&&(object1.u==object2.u)){

                 object3=object1 +object2;
                 cout<<"Result After Addition of two Matrix\n";
                 object3.show();
                }
                else{
                    cout<<"matrix addition not possible";
                }
                
                if(object1.v==object2.u){
                    object3=object1 *object2;
                cout<<"Result After Multiplication of two Matrix\n";
                object3.show();
                }
                else{
                    cout<<"matrix multiplication not possible";
                }

                

                cout<<"hello"<<object1.u<<object1.v;
                getch();
                
     }