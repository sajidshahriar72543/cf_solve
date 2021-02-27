#include<bits/stdc++.h>

using namespace std;

const int N = 1 << 9;

int main()
{
    int x, y;

    cin >> x >> y;

    int a[x], b[y];

    for(int i = 0; i < x; i++)
        cin >> a[i];
    for(int i = 0; i < y; i++)
        cin >> b[i];

    for(int res = 0; res < N; res++)
    {
        bool f = 1;

        for(int i = 0; i < x; i++)
        {
            bool ff = 0;
            for(int j = 0; j < y; j++)
            {
                if(((a[i] & b[j]) | res) == res) {
                    ff = 1;
                    //printf("%d & %d = %d\t%d\tres = %d\n", a[i], b[j], (a[i] & b[j]), ((a[i] & b[j]) | res), res);
                    break;
                }
            }

            if(!ff) {
                f = 0;
                break;
            }
        }

        if(f) {
            cout << res << '\n';
            return 0;
        }
    }

}
