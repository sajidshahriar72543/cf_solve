#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 50;
int rep[N];
vector <int> V[N];

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

    int n, m, u, v;
    cin >> n >> m;

    lop(n + 1) rep[i] = i;

    lop(m)
    {
        cin >> u >> v;
        Union(u, v);
    }

    loop(i, 1, n + 1)
    {
        int k = findrep(i);
        V[k].push_back(i);

        if (V[k].size() > 3)
        {
            cout << -1;
            return 0;
        }
    }

    vector <int> noteam;
    loop(i, 1, n + 1)
    {
        if (V[i].size() == 1)
        {
            noteam.push_back(V[i].back());
            V[i].pop_back();
        }
    }
    loop(i, 1, n + 1)
    {
        if (V[i].size() == 2)
        {
            if (!noteam.size())
            {
                cout << -1;
                return 0;
            }
            V[i].push_back(noteam.back());
            noteam.pop_back();
        }
    }

    loop(j, 1, n + 1)
    {
        while (V[j].size())
        {
            cout << V[j].back() << ' ';
            V[j].pop_back();
        }
        cout << '\n';
    }
    while (noteam.size())
    {
        cout << noteam.back() << ' ';
        noteam.pop_back();
    }

    return 0;
}
