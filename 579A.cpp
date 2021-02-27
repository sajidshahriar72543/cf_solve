#include<bits/stdc++.h>

using namespace std;

int LargestPower2(int x)
{
    int i;

    for(i = 1; i <= x / 2; i *= 2)
    {
        x = x | (x >> i);
    }

    return (x + 1) / 2;
}

int main()
{
    int n, c = 0, i, t;

    cin >> n;

    while(1)
    {
        if(n == 0)
            break;
        if(n == 1) {
            c++;
            break;
        }

        n = n - LargestPower2(n);
        c++;
    }

    cout << c << endl;

    return 0;
}
