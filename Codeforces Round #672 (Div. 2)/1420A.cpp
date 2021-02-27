#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        vector <int> a(x);

        lop(x) cin >> a[i];

        bool f = 0;

        loop(i, 0, x - 1)
        {
            if(a[i] <= a[i + 1])
            {
                f = 1;
                break;
            }
        }

        if(!f) no;
        else yes;
    }

    return 0;
}

