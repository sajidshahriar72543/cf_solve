#include<bits/stdc++.h>
using namespace std;

#define inf 999999999999

int main()
{
    int n, i;
    double p = 0.0;
    cin >> n;
    for(i = n; i > 0; i--)
    {
        p += (1.0/i);
    }
    cout << p << endl;
    return 0;
}
