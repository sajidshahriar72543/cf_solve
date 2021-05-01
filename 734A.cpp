#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int danik = 0, anton = 0;
    char s[n];
    for(int i=0; i<n; ++i){
        cin>>s[i];
    }
    for(int i=0; i<n; ++i){
        if(s[i]=='D'){
            danik++;
        }
        else if(s[i]=='A'){
            anton++;
        }
    }
    if(danik>anton){
        cout<<"Danik\n";
    }
    else if(danik<anton){
        cout<<"Anton\n";
    }
    else{
        cout<<"Friendship\n";
    }
    return 0;
}
