#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

#define yes printf("yes\n")
#define no printf("no\n")

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test, n;

    string s;

    cin >> test;

    while(test--)
    {
        cin >> s;

        cout << s[0] << s[1];

        n = s.size() - 1;

        lop(2, n)
            if(i % 2)
                cout << s[i];

        if(n > 1) cout << s[n];
        cout << '\n';
    }

    return 0;
}

