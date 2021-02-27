#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x[4], test, r, g, b, w;

    cin >> test;

    while(test--)
    {
        cin >> r >> g >> b >> w;

        x[0] = r, x[1] = g, x[2] = b, x[3] = w;

        if(x[3] == 0)
        {
            int od = 0;

            lop(0, 3)
            {
                if(x[i] & 1)
                    od++;
            }

            if(od != 2)
                yes;
            else
                no;
            continue;
        }
        sort(x, x + 4);

        if(x[3] == 0 or (x[3] != 0 and x[2] == 0))
        {
            yes;
            continue;
        }

        //if(w == 0 and ((r % 2 != 1 and g % 2  != 1 and b % 2 != 1) or (r % 2 != 1 and g % 2  != 1 and b % 2 != 1)))
        if(x[3] % 2 == 1 and x[2] % 2 == 1 and x[0] == 0)
        {
            no;
            continue;
        }

        int od = 0;

        lop(0, 4)
        {
            if(x[i] & 1)
                od++;
        }

        if(od != 2)
        {
            yes;
            continue;
        }

        no;
    }

    return 0;
}

