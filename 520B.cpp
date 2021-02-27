#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int n, m;

    cin >> n >> m;

    if(n >= m)
        cout << n - m << '\n';

    else
    {
        int x = 0;

//        while(m > n) {
//            x++;
//
//            if(m % 2) m++;
//            else m /= 2;
//        }
//
        while(n < m) {
            x++;

            if(!(n % 2) and n > 1) --n;
            else n <<= 1;

            //cout << n;
        }

        cout << x + (n - m) << '\n';
    }
//main();
    return 0;
}

