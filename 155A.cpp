#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;

    cin >> n >> a;

    int mx = a, mn = a, c = 0;

    for(int i = 1; i < n; i++)
    {
        cin >> a;

        if(a > mx or a < mn) {
            a > mx ? mx = a : mn = a;
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
