#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
//    ios_base::sync_with_stdio(0);
  //  cin.tie(0);
    //cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, y;

    cin >> x >> y;

    int s = x, p = x;

    while(x)
    {
        //cout << s << ' ' << x << '\n';
        s += x / y;
        int xx = x % y;
        x /= y;
        if(x == 0)
            break;
        x += xx;
        //cout << p++ << ' ';
    }

    cout << s << endl;

    //main();

    return 0;
}
