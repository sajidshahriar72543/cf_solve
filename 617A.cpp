#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c; cin>>n;
    if(n<=5){
        cout<<1<<endl;
    }
    else{
        if(n%5==0){
            cout<<n/5<<endl;
        }
        else{
            cout<<(n/5)+1<<endl;
        }
    }
    return 0;
}