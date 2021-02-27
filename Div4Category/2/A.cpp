#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 5e5 + 9;
int rep[N], cnt[N], n, m;

int findrep(int x)
{
    return rep[x] = rep[x] == x ? x : findrep(rep[x]);
}

void Union(int u, int v)
{
    rep[findrep(v)] = findrep(u);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    lop(n) rep[i + 1] = i + 1;

    loop(j, 1, m + 1)
    {
        int k, p, q = -1; cin >> k;

        lop(k) {
            cin >> p;
            if (q != -1)
                Union(q, p);

            q = p;
        }
    }

    lop(n)
    {
        int k;
        k = findrep(i + 1);
    }

    lop(n) cnt[rep[i + 1]]++;
    lop(n) cout << cnt[rep[i + 1]] << ' ';

    return 0;
}
