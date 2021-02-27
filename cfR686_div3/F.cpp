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

    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> x;
        int a[x];
        lop(x) cin >> a[i];

        int b = x - 2, c = 1, d = 1;
        set <int> st1, st2, st3;

        lop(x)
        {
            if (i < x - 2)
                st1.insert(a[i]);
            else if (i > x - 2)
                st3.insert(a[i]);
            else
                st2.insert(a[i]);
        }

        while (1)
        {
            auto it = st1.end(); it--;
            auto it3 = st3.end(); it3--;

        }

        cout << x << '\n';
    }

    return 0;
}
