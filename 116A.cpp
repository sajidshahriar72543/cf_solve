#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,p=0,max=0; cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; ++i){
        cin>>a[i]>>b[i];
        p = b[i]-a[i]+p;
        if(max<p){
            max=p;
        }
    }
    cout<<max;
    return 0;
}
   