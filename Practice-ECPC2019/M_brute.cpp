#include<bits/stdc++.h>

using namespace std;

const int N = 1e4 + 5;
int ara[N];

int dgt(int n)
{
    int x = 0;
    while (n) {
        x += n % 10;
        n /= 10;
    }
    return x;
}

int main()
{
    int t;

    for (int i = 0; i < N; i++)
        ara[i] = dgt(i + 1);


    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;

        vector <int> lis;

        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(lis.begin(), lis.end(), ara[i]);

            if (it == lis.end())
                lis.push_back(ara[i]);

            else
                lis[it - lis.begin()] = ara[i];
        }

        cout << lis.size() << '\n';
    }

    return 0;
}