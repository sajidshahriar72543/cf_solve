#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int a, b = 0, c = 0;

        a = x / 3;

        x = x % 3;

        if(x == 2)
            b = 1, a--;

        if(x == 1)
            c = 1, a -= 2;

        if(a < 0)
            cout << -1;
        else 
            cout << a << ' ' << b << ' ' << c;
        cout << endl;
    }

    return 0;
}
