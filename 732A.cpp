#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;

    cin >> k >> r;

    int buy = 1;

    while(1)
    {
        if((buy * k) % 10 == 0 or (buy * k) % 10 == r)
            break;
        buy++;
    }

    cout << buy << '\n';

    return 0;
}
