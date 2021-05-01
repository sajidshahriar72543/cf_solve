#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    cin>>s;
    int c=0;
    for(int i=0; i<strlen(s); ++i){
        if(s[i]=='4' || s[i]=='7'){
            c++;
        }
    }
    cout<<c;
    if(c==4||c==7){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
