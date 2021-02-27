#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int p, n, x, y;

int ques(int x, int y);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    int perm[n + 1], pos = 1;

    loop(i, 2, n + 1)
    {
        x = ques(pos, i);
        y = ques(i, pos);

        if(x > y)
            perm[pos] = x, pos = i;

        else
            perm[i] = y;
    }

    perm[pos] = n;

    cout << "!";

    loop(i, 1, n + 1)
        cout << ' ' << perm[i];

    cout << endl;

    return 0;
}

int ques(int x, int y)
{
    cout << "? " << x << ' ' << y << endl;

    cin >> p;

    return p;
}
