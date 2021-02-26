#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, a=0; cin>>x;
    string s;
    for(int i=0; i<x; ++i){
        cin>>s;
        if(s[1]=='+'){
            a++;
        }
        else{
            a--;
        }
    }
    cout<<a<<endl;
    return 0;
}
