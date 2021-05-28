// File Name: 228A.cpp
// Date: 2021-05-26
// Time: 13:59:58

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n=4,c=0;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        /* code */
    }
     sort(a,a+4);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    //     /* code */
    // }
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1]){
            c++;
        }
        /* code */
    }
    cout<<c<<endl;
    /*your code here*/
return 0;
}
