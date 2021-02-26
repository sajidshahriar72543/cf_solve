#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; int a[n], b[n];
    for (int i=0; i<n; ++i){
        cin>>a[i];
    }
    int size = sizeof(a)/sizeof(a[0]);
    sort(a, a+size);
    for (int i=0; i<n; ++i){
        cout<<a[i]<<" ";
    }
    return 0;
}

