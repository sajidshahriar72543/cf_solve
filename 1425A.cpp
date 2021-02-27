#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,cn;
    unsigned long long n,k,s;

    cin>>t;
    for(int z=0;z<t;z++)
    {
        cn=0; s=0;
        cin>>n;
        while(n)
        {
            if(n%2==0)
            {
                k=n/2;

                if(k % 2 == 0)
                    k = 1LL;

                if()
            }
            else
            {
                k=1LL;
            }
            n=n-k;

            cout << n << ' ' << k << endl;
            if(cn%2==0)
            {
                s+=k;
            }
            cout << n << ' ' << k << ' ' << cn << ' ' << s << endl;
            cn++;
        }
        cout<<s<<endl;
    }
    return 0;
}
