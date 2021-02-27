#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "DA\n"
#define no cout << "NET\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> s;
        x = s.size();

        int c = 0, z = 0, o = 0;
        bool f = 1;

        lop(0, x)
        {
            if(s[i] == '0') {
                z++;
            }
            else o++;
        }

        c = min(z, o);

        c % 2 == 0 ? no : yes;
    }

    return 0;
}

