#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s, n;

    multimap <int, int> sb;

    cin >> s >> n;

    int a, b;

    lop(0, n) cin >> a >> b, sb.insert(make_pair(a, b));

    for(auto i = sb.begin(); i != sb.end(); i++)
    {
        if(s <= i -> first) {
            //cout << s << ' ' << i-> first;
            no;
            return 0;
        }

        s += i -> second;
    }

    yes;

    return 0;
}

