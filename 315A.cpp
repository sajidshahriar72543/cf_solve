#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[1001] = {0}, c[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> c[i];
        b[c[i]]++;
    }

    int s = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == c[i])
        {
            if(b[a[i]] == 1)
                s++;
        }
        else
        {
            if(!b[a[i]])
                s++;
        }
    }

    cout << s << endl;

    return 0;
}
