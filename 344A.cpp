#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x = 0;

    cin >> n;

    int mag[n];

    for(i = 0; i < n; i++)
    {
        cin >> mag[i];
        if(i > 0)
        {
            if(mag[i] != mag[i - 1])
                x++;
        }
    }

    cout << ++x << endl;

    return 0;
}
