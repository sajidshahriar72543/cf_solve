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

        int sub[n], ts = 0;

        queue <int> nd[2];

        lop(0, n)
        {

            bool p = s[i] - '0';

            if(nd[p].empty())
                sub[i] = ++ts;

            else
            {
                x = nd[p].front();
                nd[p].pop();

                sub[i] = x;
            }

            nd[1 - p].push(sub[i]);
        }

        cout << ts << '\n';
        lop(0, n) cout << sub[i] << ' ';
        cout << '\n';
    }

    return 0;
}

