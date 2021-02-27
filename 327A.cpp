#include<bits/stdc++.h>

using namespace std;

#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    int n;

    cin >> n;

    bool a[n];

    lop(0, n) cin >> a[i];

    int l = 0, r = 0, z = 0, x;

    lop(0, n)
    {
        lopj(i, n)
        {
            x = 0;
            for(int k = i; k <= j; k++)
            {
                if(a[k] == 0) x++;
                else x--;
            }

            if(x > z) {
                l = i;
                r = j;
                z = x;
            }
        }
    }

    lop(l, r + 1)   a[i] = 1 - a[i];

    z = count(a, a + n, 1);

    cout << z;

    return 0;
}
