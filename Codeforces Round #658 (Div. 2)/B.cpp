#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "First\n"
#define no cout << "Second\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int a[x];
        lop(0, x) cin >> a[i];

        int f = 0, ff = 0, ss = 0;

        for(int i = 0; i < x - 1; i++)
        {
            if(a[i] > 1) {
                break;
            }
            else
                f++;
        }

        if(f & 1) no;
        else yes;
    }

    return 0;
}

