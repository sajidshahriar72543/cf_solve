#include<bits/stdc++.h>

using namespace std;

struct seg
{
    int x, y, z;

    bool operator < (const seg & B) const
    {
        if(x == B.x)
            return y > B.y;
        else
            return x < B.x;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    seg file[n];

    for(int i = 0; i < n; i++)
    {
        cin >> file[i].x >> file[i].y;
        file[i].z = i + 1;
    }

    sort(file, file + n);

    int ans = file[0].z;

    for(int i = 1; i < n; i++)
    {
        if(file[i].y > file[0].y)
        {
            ans = -1;
            break;
        }
    }

    cout << ans;

    return 0;
}
