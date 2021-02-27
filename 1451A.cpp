#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> x;

        if (x == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        if (x == 2)
        {
            cout << 1 << '\n';
            continue;
        }
        if (x == 3)
        {
            cout << 2 << '\n';
            continue;
        }


        int n = x;

        for (int i = 2; i * i <= x; i++)
            if (x % i == 0)
            {
                x = i;
                break;
            }

        if (x == n)
            cout << 3 << '\n';
        else
        {
            int ans = 1;
            if (x == 2) ans++;
            else ans += 2;

            cout <<  ans << '\n';
        }
    }

    return 0;
}
