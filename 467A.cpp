#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, i, flag = 0;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> p >> q;

        if(q - p > 1)
            flag++;
    }

    cout << flag << endl;

    return 0;
}
