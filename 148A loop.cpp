#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d, k, l, m, n, h = 0, i, hit[4];

    for(i = 0; i < 4; i++)
        scanf("%d", &hit[i]);

    scanf("%d", &d);

    bool harm[d + 1] = {0};

    sort(hit, hit + 4);

    for(i = hit[0]; i <= d; i += hit[0])
        harm[i] = 1;

    if(hit[1] % hit[0]) {
        for(i = hit[1]; i <= d; i += hit[1])
            harm[i] = 1;
    }

    if(hit[2] % hit[0] and hit[2] % hit[1]) {
        for(i = hit[2]; i <= d; i += hit[2])
            harm[i] = 1;
    }

    if(hit[3] % hit[0] and hit[3] % hit[1] and hit[3] % hit[2]) {
        for(i = hit[3]; i <= d; i += hit[3])
            harm[i] = 1;
    }

    cout << count(harm, harm + d + 1, 1) << endl;

    return 0;
}
