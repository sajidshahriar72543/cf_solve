#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, n;
    string s;

    cin >> k >> s;

    if(k == 1) {
        cout << s;
        return 0;
    }

    n = s.size();

    int cnt[26] = {0};

    lop(0, n)
        cnt[s[i] - 'a']++;

    bool f = 0;
    lop(0, 26)
        if(cnt[i])
        {
            if(cnt[i] < k or cnt[i] % k) {
                f = 1;
                break;
            }

            cnt[i] /= k;
        }

    if(k > n or n % k or f) {
        cout << -1;
        return 0;
    }

    string res;

    lop(0, 26)
    {
        lopj(0, cnt[i])
            res += (char) ('a' + i);
    }

    lop(0, k) cout << res;

    return 0;
}

