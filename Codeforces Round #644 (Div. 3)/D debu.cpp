#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int r[t];
    for(int i=0; i<t; i++)
    {
        long long int n,k;
        cin>>n>>k;


            for(int j=1; j<=sqrt(n); j++)
            {
                if(n%j==0&&n/j<=k)
                {
                    r[i]=j;

                    break;

                }
                else
                {
                    r[i]=n;
                }
            }

    }
    for(int i=0; i<t; i++)
    {
        cout<<r[i]<<endl;
    }
}

