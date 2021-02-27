#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test, k;

    cin >> test;

    while(test--)
    {
        cin >> x >> k;

        bool f = 0;

        int a, b, c, d;

        lop(x)
        {
            cin >> a >> b >> c >> d;

            if(b == c) f = 1;
        }


        if(!(k & 1) and f)
            yes;
        else 
            no;
    }

    return 0;
}
