#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test, n, a, b;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> a >> b;

        if(a > b) swap(a, b);

        int res = (b - a) / 10;
        if((b - a) % 10 != 0)
            res++;

        cout << res << '\n';
    }

    return 0;
}

