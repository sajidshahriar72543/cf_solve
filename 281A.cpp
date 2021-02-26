#include<bits/stdc++.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string inp,out,rest;
    getline(cin,inp);
    out=toupper(inp[0]);
    cout<<out;
    int x = inp.length();
    for (int i=1; i<x; ++i){
        cout<<inp[i];
    }
    cout<<endl;
    return 0;
}
 
