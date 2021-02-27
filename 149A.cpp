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

    int k, m[12], s = 0;

    cin >> k;
    lop(0, 12) cin >> m[i];

    sort(m, m + 12, greater <int> ());

    lop(0, 12)
    {
        if(s >= k) {
            cout << i;
            return 0;
        }

        s += m[i];
    }

    if(s >= k)
        cout << 12;
    else cout << -1;


    return 0;
}

