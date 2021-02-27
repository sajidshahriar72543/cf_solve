#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

void print(int x)
{
    cout << 2;
    lop(1, x) cout << 3;
    cout << '\n';

    return;
}

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

        if(x == 1)
            cout << -1 << '\n';

        else
            print(x);
    }

    return 0;
}

