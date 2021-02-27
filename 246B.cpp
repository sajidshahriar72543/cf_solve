#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    long long a, s = 0;

    for(int i = 0; i < n; i++)
        cin >> a, s += a;

    double avg = s / (n * 1.0);

    if(ceil(avg) == floor(avg))
        cout << n << '\n';

    else
        cout << n - 1 << '\n';

    return 0;
}
