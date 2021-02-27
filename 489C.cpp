#include<bits/stdc++.h>

using namespace std;

#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define lopjr(a, b) for(int j = a; j > b; j--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int m ,ss, s;
    string minimum, maximum;

    cin >> m >> ss;

    if(ss > m * 9 or (m > 1 and ss == 0)) {
        cout << -1 << " " << -1 << '\n';
        return 0;
    }

    s = ss;

    lop(0, m)
    {
        lopj(0, 10)
        {
            if((i > 0 or j > 0 or (m == 1 && j == 0)) and (s - j >= 0 and s - j <= 9 * (m - i - 1))) {
                minimum += (char) ('0' + j);
                s -= j;
                break;
            }
        }
    }

    s = ss;

    lop(0, m)
    {
        lopjr(9, -1)
        {
            if((i > 0 or j > 0 or (m == 1 && j == 0)) and (s - j >= 0 and s - j <= 9 * (m - i - 1))) {
                maximum += (char) ('0' + j);
                s -= j;
                break;
            }
        }
    }

//    if(minimum.empty() or maximum.empty())
//        cout << -1 << " " << -1 << '\n';
//
//    else
        cout << minimum << " " << maximum << '\n';

    return 0;
}
