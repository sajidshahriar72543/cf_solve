#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, test, n;

    cin >> test;

    while(test--)
    {
        cin >> n >> x;

        bool f = 1, ff = 0;

        int a[n];

        lop(n)
        {
            cin >> a[i];
            a[i] -= x;

            if(a[i])
               f = 0;
            else
                ff = 1;
        }

        if(f)
        {
            cout << 0 << endl;
            continue;
        }

        int s = 0;

        lop(n) s += a[i];

        if(!s or ff) s = 1;
        else s = 2;

        cout << s << '\n';
    }

    return 0;
}

