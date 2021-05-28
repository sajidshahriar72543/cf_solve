// File Name: 1328A.cpp
// Date: 2021-05-28
// Time: 12:08:14

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
    if (a%b==0)
    {
        cout<<0<<endl;
        /* code */
    }
    else
    {
        cout<<b-(a%b)<<endl;
        /* code */
    }
        /* code */
    }
    
    // cout<<endl;
    // main();
    
    /*your code here*/
return 0;
}
