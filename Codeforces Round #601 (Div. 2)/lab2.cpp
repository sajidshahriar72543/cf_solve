#include<iostream>
using namespace std;
class A
{public:
    int x[100];
    void inheri()
    {

        cout<<"X="<<x<<endl;
        cin>>x;
    }
};
int main()
{
    A a1;
    a1.inheri();
}
