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

    int x, test, n;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n;

        int cnt[26] = {0};

        lop(0, n)
        {
            cin >> s;

            x = s.size();

            lopj(0, x)
                cnt[s[j] - 'a']++;
        }

        bool f = 0;

        lop(0, 26)
        {
            if(cnt[i] and cnt[i] % n) {
                f = 1;
                no;
                break;
            }
        }

        if(!f) yes;
    }

    return 0;
}

