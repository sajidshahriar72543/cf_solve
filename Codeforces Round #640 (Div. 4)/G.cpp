#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b, c) for(int i = a, i < b; i += c)

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    int x, test, p;

    cin >> test;

    while(test--)
    {
        cin >> x;

        if(x < 4)
        {
            cout << -1 << endl;
            continue;
        }

        p = x % 2 == 0 ? x - 1 : x;

        for(int i = p; i > 0; i -= 2)
            cout << i << " ";

        cout << 4 << " " << 2 << " " ;

        p = x % 2 == 0 ? x : x - 1;

        for(int i = 6; i <= p; i += 2)
            cout << i << " ";

        cout << '\n';
    }

    return 0;
}

