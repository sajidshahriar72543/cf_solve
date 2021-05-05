#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arr[i+1]){
            c++;
        }
        /* code */
    }

    cout<<c;
    /*your code here*/
return 0;
}
