#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 1e4 + 5;
int cnt[N], n, a[105], b[105];
string state;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> state;

    lop(n)
    {
        if (state[i] == '1')
            cnt[0]++;
    }

    lop(n)
    {
        cin >> a[i] >> b[i];

        /*bool f = state[i] - '0';

        // loop(j, 1, b - 1)
        // {
        //     if(f)
        //         cnt[j] += 1;
        // }

        for (int j = b; j < N; j += a)
        {
            // if(j % b)
            // {
            //     if(f)
            //         cnt[j]++
            // }
            if (!f)
                cnt[j]++;
            else
                cnt[j]--;//, cnt[j] = max(cnt[j], 0);

            f ^= 1;
        }

        loop(j, 0, 30) cout << cnt[j] << ' ';
        cout << '\n';*/
    }

    loop(i, 1, N)
    {
        cnt[i] = cnt[ i - 1];
        loop(j, 0, n)
        {
            if (b[j] > i or (i - b[j]) % a[j])
                continue;

            if (state[j] == '0')
                cnt[i]++, state[j]++;
            else
                cnt[i]--, state[j]--;

            // if (i < 10)
            //     cout << i << ' ' << j << ' ' << cnt[i] << '\n' << state << '\n';

            cnt[i] = max(cnt[i], 0);

            // if (i < 10)
            //     cout << i << ' ' << j << ' ' << cnt[i] << '\n' << state << '\n';

        }

        // if (i < 30)
        //     cout << cnt[i] << ' ';
    }

    // lop(20) cout << i << ' ' << cnt[i] << '\n';

    cout << *max_element(cnt, cnt + N) << '\n';

    return 0;
}