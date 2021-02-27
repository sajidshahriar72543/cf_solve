#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> x >> s;

        int st = 0, en = 0, ans = 0;

        lop(0, x)
        {
            if(s[i] == '(')
                st++;
            else
                st--;
            if(st < ans)
                ans = st;
        }

        cout << ans * -1 << '\n';
    }

    return 0;
}

