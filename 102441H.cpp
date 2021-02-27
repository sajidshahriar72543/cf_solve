#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;

    while(n--)
    {
        cin >> a >> b;

        if(a + b != 50)
            cout << 50 << endl;
        else
            cout << 49 << endl;
    }
}
