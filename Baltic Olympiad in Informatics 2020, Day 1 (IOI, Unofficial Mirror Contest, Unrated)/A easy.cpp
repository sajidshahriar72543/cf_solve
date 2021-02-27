#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool ask(int p)
{
    cout << "? " << p << endl;
    bool x;
    cin >> x;
    return x;
}

int main()
{
    int test;
    ll n, m, d;
    bool x;

    cin >> test;

    while(test--)
    {
        cin >> n;

        x = ask(1);
        x = ask(n / 2);
        int i, j, k;
        bool f = 0;

        if(x) j = n / 2;
        else j = n;

        for(i = 2, k = 0; k < min(n, 64LL); k++)
        {
            d = j - i;
            if(k & 1)
            {
                x = ask(j);
                if(!x)
                {
                    cout << "= " << d + 1 << endl;
                    f = 1;
                    break;
                }
                j--;
            }

            else
            {
                x = ask(i);
                if(!x)
                {
                    cout << "= " << d + 1 << endl;
                    f = 1;
                    break;
                }
                i++;
            }
        }

        if(!f)
            cout << "= " << 1 << endl;
    }

    return 0;
}

