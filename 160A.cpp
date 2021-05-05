#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,sum1=0, sum2=0, c=0;
    cin >> a;
    int coins[a];
    for (int i = 0; i < a; i++)
    {
        cin>>coins[i];
        sum1+=coins[i];
        /* code */
    }
    sum1/=2;
    sort(coins,coins+a);
    for (int j = a-1; j >= 0; j--)
    {
        sum2+=coins[j];
        c++;
        if(sum2>sum1){
            break;
        }
        /* code */
    }
    cout<<c;
    
    /*your code here*/
return 0;
}
