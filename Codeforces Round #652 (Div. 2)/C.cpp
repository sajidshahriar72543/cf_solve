#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define N 200009

ll num[N + 1], fnd[N + 1];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll test, n, k;

    cin >> test;

    while(test--)
    {
        cin >> n >> k;
        //ll num[n], fnd[k];

        lop(0, n) cin >> num[i];
        lop(0, k) cin >> fnd[i];

        sort(num, num + n, greater <ll> ());
        sort(fnd, fnd + k);

        ll sum = 0, pos = 0, pos2 = k - 1, pp = 0;
        lop(0, k)
        {
            if(fnd[i] == 1) {
                sum += 2 * num[pos++];
                pp++;
            }

            else break;
        }

        //cout << sum << "\t";
//        lop(pp, k)
//        {
//            if(fnd[i] == 2) {
//                sum += num[pos] + num[pos + 1];
//                i++;
//                pos += 2;
//                pp++;
//            }
//
//            else break;
//        }
        //cout << sum << '\n';

        lop(pp, k)
        {
            pos2 += fnd[i] - 1;
            sum += num[pos] + num[pos2];
            //cout << sum << "\t" << num[pos] << " " << num[pos2] << '\n';
            pos++;
            //pos2 += fnd[i - 1];
        }

        cout << sum << '\n';

    }

    return 0;
}



