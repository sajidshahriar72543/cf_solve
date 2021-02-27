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

    int x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int a[x + 1], b[x + 1];

        lop(1, x + 1)
        {
            cin >> a[i];
            b[a[i]] = i;
        }

        bool f = 1;

        for(int i = 2; i < x; i++)
        {
            if(a[i] > a[i - 1])
            {
                int n = 0;
                for(int j = i + 1; j <= x; j++)
                if(a[j] < a[i]) {
                    n = j;
                    break;
                }

                if(n) {
                f = 0;
                yes;
                cout << i - 1 << " " << i << " " << n << '\n';
                break;
            }
            }
        }

        if(f)
            no;

    }

    return 0;
}

