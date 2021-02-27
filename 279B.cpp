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

    //freopen("input.txt", "r", stdin)

    int n, t;

    cin >> n >> t;

    int a[n + 1];
    a[0] = 0;
    lop(1, n + 1) { cin >> a[i]; a[i] += a[i - 1];}

    int s = 0, k = 1;

    lop(1, n + 1)
    {
        lopj(k, n + 1)
        {
            if(a[j] - a[i - 1] > t)
                break;

            s = max(s, j - i + 1);
            k++;
        }
    }

    cout << s << '\n';

    return 0;
}

