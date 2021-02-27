#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, sumB, sumC, i;

    cin >> n;

    sumB = sumC = 0;

    for(i = 0; i < n; i++)
    {
        cin >> a;

        if(a > 0)
            sumB += a;

        else
            sumC += a;
    }

    cout << sumB - sumC << endl;

    return 0;
}
