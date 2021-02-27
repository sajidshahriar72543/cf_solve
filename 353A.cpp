#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x;

    cin >> x;

    int a, b, odu, evu, odd, evd;
    odu = evu = odd = evd = 0;
    bool ok = 0;

    lop(x)
    {
        cin >> a >> b;

        if(a & 1) odu++;
        else evu++;

        if(b & 1) odd++;
        else evd++;

        if(((a & 1) and !(b&1)) or (!(a & 1) and (b & 1)))
            ok = 1;
    }

    //cout << odu << ' ' << evu << endl;

    int ans = -1;

    if((!odd and !odu) or (!(odd & 1) and !(odu & 1))) 
        ans = 0;

    else if(ok and (odd & 1) and (odu & 1))
        ans = 1;

    cout << ans << endl;

    return 0;
}
