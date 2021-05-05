#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    string s;
    cin>>s;
    for(int i=0; i<p; ++i){
        for(int j=0; j<s.size(); ++j){
            if(s[j]=='B'&&s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
                //continue;
            }
            else{
                continue;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}