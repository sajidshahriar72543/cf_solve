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

    int x, test, n;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n >> s;
        string res;

        int l = -1, r = -1;

        for(int i = 0, j = n - 1; i < n; i++, j--)
        {
            if(s[i] == '1' and l == -1)
                l = i;
            if(s[j] == '0' and r == -1)
                r = j;

            if(r != -1 and l != -1)
                break;
        }
        //cout << l << " " << r << '\n';

        if(r < l or l == -1 or r == -1)
        {
            cout << s << "\n";
            continue;
        }

        lop(0, l) res += s[i];
        lop(r, n) res += s[i];

        cout << res << '\n';
    }

    return 0;
}


