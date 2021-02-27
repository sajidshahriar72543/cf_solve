#include<bits/stdc++.h>

using namespace std;

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)

int main()
{
    int n;
    bool l, r, u, d;

    cin >> n;

    int x[n], y[n];

    lop(n) cin >> x[i], cin >> y[i];

    int c = 0;

    lop(n)
    {
        l = r = u = d = 0;

        lopj(n)
        {
            if(x[j] > x[i] and y[i] == y[j])
                r = 1;
            else if(x[j] < x[i] and y[i] == y[j])
                l = 1;
            else if(x[j] == x[i] and y[i] > y[j])
                d = 1;
            else if(x[j] == x[i] and y[i] < y[j])
                u = 1;

            if(l and r and u and d)
                break;
        }

        if(l and r and u and d)
            c++;
    }

    cout << c << endl;

    return 0;
}
