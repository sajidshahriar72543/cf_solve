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

        int a[x];

        lop(x) a[i] = i + 1;

        cout << 2 << endl;

        for(int i = x - 1; i > 0; i--)
        {
            cout << a[i] << ' ' << a[i - 1] << '\n';
            a[i - 1] = ceil((a[i] + a[i - 1])/ 2.0);
        }
           
    }

    return 0;
}
