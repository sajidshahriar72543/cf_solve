#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    void calculi()
    {
      cin>>x;
       cout<<"X="<<x<<endl;


    }
    friend class B;
};
class B
{ public:
    int i,y;
    void clculi(A &x)
    {
        for(i=1;i<x;i++)
        {
            y=x*(x-i);
        }
    }
};

int main()
{
 A a1;
 B b1;
 b1.calculi(a);
}
