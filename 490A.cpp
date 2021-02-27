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

    int n, k;

    vector <int> skill[3];

    cin >> n;

    lop(0, n)
    {
        cin >> k;

        skill[--k].push_back(i + 1);
    }

    int res = n + 100;

    lop(0, 3) res = min(res, (int) skill[i].size());

    cout << res << '\n';

    lop(0, res)
        cout << skill[0][i] << ' ' << skill[1][i] << ' ' << skill[2][i] << '\n';

    return 0;
}
