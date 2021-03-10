#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100]; cin>>s;
    int n = strlen(s), c=0;
    for(int i=0; i<n; ++i){
        if(s[i] == s[i-1]){
            c++;
            if(c==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            c = 1;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}