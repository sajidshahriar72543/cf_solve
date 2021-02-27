#include<bits/stdc++.h>

using namespace std;

#define lop(n) for(int i = 0; i < n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define lopr(a, n) for(int i = a; i < n; i++)

int main()
{
    int n, maxe, mine, maxi, mini, time;

    cin >> n;

    int a[n];

    lop(n) cin >> a[i];

    maxe = mini = a[0];
    maxi = mini = 0;

    lop(n)
    {
        if(a[i] > maxe) {
            maxe = a[i];
            maxi = i;
        }

        if(a[i] <= mine) {
            mine = a[i];
            mini = i;
        }
    }

    time = maxi + (n - 1 - mini);

    //cout << maxi << " " << mini;

    if(maxi > mini)
        time--;


    cout << time << endl;

    return 0;
}
