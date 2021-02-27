#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int X[] = {4, 8, 15, 16, 23, 42};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int a;
    queue <int> q[50];
    lop(n)
    {
        cin >> a;
        q[a].push(i);
    }

    int x = 0, f = 1;
    lop(6) if (q[X[i]].empty()) f = 0;

    while (f)
    {
        int p = q[4].front();
        q[4].pop();

        loop(i, 1, 6)
        {
            // cout << X[i] << ' ' << p << '\n';
            int pp = q[X[i]].front();
            while (!q[X[i]].empty() and pp < p)
            {
                // cout << "poped " << pp << '\n';
                q[X[i]].pop();
                pp = q[X[i]].front();
            }

            if (pp < p)
            {
                f = 0;
                break;
            }

            p = pp;
            if (!q[X[i]].empty()) q[X[i]].pop();//, cout << "empty " << X[i] << '\n';
            // cout << X[i] << ' ' << p << '\n';
        }

        if (f) x++;
        lop(6) if (q[X[i]].empty()) f = 0;
    }

    cout << n - (x * 6) << '\n';

    return 0;
}
