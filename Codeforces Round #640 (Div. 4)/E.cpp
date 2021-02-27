#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int num[x + 1] = {0}, cnt[x + 1] = {0};

        lop(0, x) cin >> num[i];

        lop(0, x)
        {
            int sum = num[i];

            lopj(i + 1, x) {
                sum += num[j];

                if(sum > x) break;

                else cnt[sum]++;
            }
        }

        int sp_el = 0;

        lop(0, x) if(cnt[num[i]]) sp_el++;

        cout << sp_el << '\n';
    }

    return 0;
}

