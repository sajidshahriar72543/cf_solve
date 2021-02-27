#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d, k, l, m, n, h = 0;
    int hit[4];

    for(int i = 0; i < 4; i++)
        cin >> hit[i];

    cin >> d;

    sort(hit, hit + 4);

    k = l = m = n = 0;

    k = d / hit[0];
    cout << "k = " << k << endl;

    if(hit[1] % hit[0] != 0)
        l = (d / hit[1]) - (d / (hit[0] * hit[1]));
    cout << "l = " << l << endl;

    if(hit[2] % hit[0] != 0 and hit[2] % hit[1] != 0) {
        m = d / hit[2];
        m -= d / (hit[0] * hit[2]);
        if(l != 0)
            m -= d / (hit[1] * hit[2]);
    }
    cout << "m = " << m << endl;

    if(hit[3] % hit[0] != 0 and hit[3] % hit[1] != 0 and hit[3] % hit[2] != 0) {
        n = d / hit[3];
        n -= d / (hit[0] * hit[3]);
        if(l != 0)
            n -= d / (hit[1] * hit[3]);
        if(m != 0)
            n -= d / (hit[2] * hit[3]);
    }
    cout << "n = " << n << endl;

    cout << k + l + m + n << '\n';

    return 0;
}
