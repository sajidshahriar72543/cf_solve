#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

struct Time
{
    ll a, b;

    bool operator < (const Time &B) const
    {
        if (a == B.a)
            return b < B.b;
        return a > B.a;
    }
};

int main()
{
    int x, test;

    cin >> test;

    while (test--)
    {
        int n; cin >> n;
        Time tm[n];
        lop(n) cin >> tm[i].a;
        lop(n) cin >> tm[i].b;

        sort(tm, tm + n);

        ll cost = 0, time = 0;
        lop(n)
        {
            if (tm[i].b + cost < tm[i].a)
                cost += tm[i].b, time = max(time, cost);
            else
                time = max(time, tm[i].a);

            //printf("%d %d %d %d\n", tm[i].a, tm[i].b, cost, time);
        }


        cout << time << '\n';
    }

    return 0;
}
