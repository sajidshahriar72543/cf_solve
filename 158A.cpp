#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i, j = 0;
    cin >> n >> k;

    int number[n];

    for(i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    for(i = 0; i < n; i++)
    {
        if(number[i] > 0 && number[i] >= number[k - 1])
        {
            j++;
        }
        //cout << number[i] << ' ' << number[k] << ' ' << j << endl;
    }
    cout << j << endl;

    return 0;
}
