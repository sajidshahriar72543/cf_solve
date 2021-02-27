#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin)

    int x, test, oddc = 0, evenc = 0, odd, even;

    cin >> test;

    lop(1, test + 1)
    {
        cin >> x;

        if(x & 1) {
            oddc++;
            odd = i;
        }

        else {
            evenc++;
            even = i;
        }
    }

    cout << (oddc == 1 ? odd : even) << '\n';

    return 0;
}

