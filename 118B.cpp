#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define lopk(a, b) for(int k = a - 1; k >= b; k--)


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;

    cin >> x;

    lop(0, x + 1)
    {
        lopj(0, (x - i) * 2)
            cout << ' ';

        lopj(0, i + 1)
        {
            cout << j;
            if(j < i)
                cout << ' ';
        }

        lopk(i, 0)
            cout << ' ' << k;

        cout << endl;
    }

    for(int i = x - 1; i >= 0; i--)
    {
        lopj(0, (x - i) * 2)
            cout << ' ';

        lopj(0, i + 1)
        {
            cout << j;
            if(j < i)
                cout << ' ';
        }

        lopk(i, 0)
            cout << ' ' << k;

        cout << endl;
    }

    return 0;
}


