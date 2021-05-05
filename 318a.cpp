#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos;
    cin>>n>>pos;
    vector<int>a;
    vector<int>b;
    
    for(int i=1; i<=n; ++i){
        if(i%2!=0){
        a.push_back(i);
        }
        else{
            b.push_back(i);
        }
    }
    a.insert(a.end(), b.begin(), b.end());
    cout<<a.at(pos)<<endl;

     for (auto i = a.begin(); i != a.end(); ++i){
         cout << *i << " ";
         }
    return 0;
}