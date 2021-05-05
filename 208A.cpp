#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            // s[i] = '\0';
            // s[i+1] = '\0';
            // s[i+2] = '\0';
            i+=2;
            cout<<" ";
        }
        else{
            cout<<s[i];
        }
        /* code */
    }
    /*your code here*/
return 0;
}
