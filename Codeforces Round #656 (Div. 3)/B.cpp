#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll x, test, n;

    cin >> test;

    while(test--)
    {
        cin >> n;

        vector <int> a;

        lop(0, 2 * n)
        {
            cin >> x;

            int c = count(a.begin(), a.end(), x);

            if(!c)
            {
                cout << x << " ";
                a.push_back(x);
            }
        }

        cout << '\n';
    }

    return 0;
}


