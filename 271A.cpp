#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,a,b,c,d;
    cin >> m;
    while (true)
    {
        m = m+1;
        a = m / 1000;
        b = m / 100 % 10;
        c = m / 10 % 10;
        d = m % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << m << endl;
    return 0;
}
