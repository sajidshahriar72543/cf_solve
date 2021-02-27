#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{__
    int n, m;

    cin >> n >> m;

    ll task[m], taim = 0, cur = 1;

    lop(0, m) cin >> task[i];

    lop(0, m)
    {
        if(task[i] >= cur)
            taim += task[i] - cur;

        else
            taim += n + task[i] - cur;

        cur = task[i];
    }

    cout << taim;

    return 0;
}

