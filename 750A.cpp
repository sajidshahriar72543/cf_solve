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

    //freopen("input.txt", "r", stdin)

    int x, k, s, i = 1, t = 0;

    cin >> x >> k;

    k = 240 - k;
    s = 5;

    while(s <= k and t < x)
    {
        t++;
        i++;
        s += 5 * i;
    }

    cout << t;

    return 0;
}
