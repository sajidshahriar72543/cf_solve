#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
            cout << i + 1 << (i < n - 1 ? ' ' : '\n');
    }

    return 0;
}
