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

    int x, test;
    string s;

    vector <int> pls, dot;

    cin >> test;

    while(test--)
    {
        cin >> s;
        x = s.size();

        lop(0, x) {
            if(s[i] == '+')
                pls.push_back(i);
            else
                dot.push_back(i);
        }

        int res = 0, cur, c = 0;

        lop(0, 1000)
        {
            c++;
            cur = i;
            cout << cur << "\t";
            bool ok = 1;
            lopj(0, x)
            {
                c++;
                res++;
                if(s[j] == '+')
                    cur++;
                else
                    cur--;

                cout << cur << " ";
                if(cur < 0) {
                    ok = 0;
                    break;
                }
            }
            cout << endl;
            if(ok)
                break;
        }

        cout << c << " " << res << '\n';

    }

    return 0;
}



