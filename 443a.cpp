// File Name: 443a.cpp
// Date: 2021-05-26
// Time: 21:25:04

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=0;
    getline(cin,s);
    sort(s.begin(),s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='{'||s[i]=='}'||s[i]==','||s[i]==' ')
        {
            continue;
            /* code */
        }
        else
        {
            if (s[i]!=s[i+1])
            {
                c++;
                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    cout<<c;
    /*your code here*/
return 0;
}
