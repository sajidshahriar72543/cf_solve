#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        if(i % 4 == 0 or i % 4 == 1) cout << 'a';
        else if (i % 4 == 2 or i % 4 == 3) cout << 'b';
        //else cout << 'c';
    }

    cout << endl;

    return 0;
}
