#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int up = 0, lo=0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
           up++;
        }
        else{
            lo++;
        }
    }
    //cout<<"upper = "<<up<<" lower = "<<lo<<endl;
    if(lo>up){
        for(auto& x: s){
        x = tolower(x);
        }
        cout<<s;
    }
    if(lo<up){
        for(auto& x: s){
        x = toupper(x);
        }
        cout<<s;
    }
    else if(lo==up){
        for(auto& x: s){
        x = tolower(x);
        }
        cout<<s;
    }
    //main();
    return 0;
}
