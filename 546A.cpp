#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long k, n, w, i, ammount = 0;

    cin >> k >> n >> w;

    for(i = 1; i <= w; i++) {
        ammount += i * k;
    }

    if(ammount > n)
        cout << ammount - n << endl;
    else
        cout << 0 << endl;

    return 0;
}
