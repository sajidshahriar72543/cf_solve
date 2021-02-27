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

        vector <int> v;

        for (int k = 4; k <= 4 * x; k++)
        {
            for (int i = k; i <= 4 * x; i++)
            {
                int n = v.size(), f = 1;
                for (int j = 0; j < n; j++)
                    if (i % v[j] == 0 or __gcd(i, v[j]) == 1)
                    {
                        f = 0;
                        break;
                    }

                if (f)
                    v.push_back(i);

                if (v.size() == x)
                    break;
            }

            if (v.size() == x)
                break;
            else
                v.clear();
        }


        for (auto &z : v) cout << z << ' ';
        cout << '\n';
    }

    return 0;
}
