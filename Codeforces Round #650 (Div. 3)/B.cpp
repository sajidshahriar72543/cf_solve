#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

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

        int a[x], odev = 0, evod = 0, c = 0;

        lop(0, x) {
            cin >> a[i];
            if(i % 2 == 0 and a[i] % 2 == 1) evod++;
            else if(i % 2 == 1 and a[i] % 2 == 0) odev++;
        }

        cout << (odev != evod ? -1 : odev) << '\n';
    }

    return 0;
}

