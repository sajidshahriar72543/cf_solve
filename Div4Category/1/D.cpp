#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"
#define ff first
#define ss second

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, p;
    cin >> n;

    queue <int> in, out;
    bool outed[n + 1] = {0};

    lop(n) cin >> p, in.push(p);
    lop(n) cin >> p, out.push(p);

    int ot = 0;
    lop(!in.empty() or !out.empty())
    {
        if (in.front() == out.front())
        {
            outed[in.front()] = 1;
            in.pop();
            out.pop();
        }
        else
        {
            if (outed[in.front()])
                in.pop();
            else
            {
                ot++;
                outed[out.front()] = 1;
                out.pop();
            }
        }
    }

    cout << ot << '\n';

    return 0;
}
