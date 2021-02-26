#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int c=0,c1=0;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    for (int i=0; i<n; ++i){
        if (a[i]==0){
            c++;
        }
        else if(a[i]==1){
            c1++;
        }
    }
    if(c1>=1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}
