#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,am,k,sum=0;
    cin>>p>>k>>am;
    for (int i=0; i<=am; ++i){
        sum = sum+(i*p);
    }
    if(sum<=k){
        cout<<"0\n";
    }
    else
    cout<<sum-k<<endl;
}
