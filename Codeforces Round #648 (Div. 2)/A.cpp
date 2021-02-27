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

    int x, test, n, m;

    cin >> test;

    while(test--)
    {
        cin >> n >> m;

        int a[n][m];
        int o = 1;

        lop(0, n) lopj(0, m) cin >> a[i][j];

        lop(0, n)
        {
            //bool f = 0;
            lopj(0, m)
            {
//                x = count(&a[i][0], &a[i][m], 1);
//                x += count(&a[0][j], &a[n][j], 1);

                x = 0;
                for(int y = 0; y < m; y++)
                if(a[i][y] == 1) {
                    x++;
                    break;
                }
                for(int y = 0; y < n; y++)
                if(a[y][j] == 1) {
                    x++;
                    break;
                }

                if(x == 0)
                {
                    a[i][j] = 1;
                    o++;
                }

//                cout << "i = " << i << " j = " << j << '\n';
//                for(int y = 0; y < n; y++)
//                {
//                    for(int z = 0; z < m; z++) cout << a[y][z] << " ";
//                    cout << endl;
//                }
            }

            //if(f == 1) break;
        }

        cout << (o % 2 == 0 ? "Ashish" : "Vivek") << '\n';
    }

    return 0;
}

