#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    int x, test;
    int a[60];

    cin >> test;

    while(test--)
    {
        cin >> x;
        lop(x) cin >> a[i];

        int mv = 0;

        lop(x)
        {
            if(a[i])
            {
                loop(j, i + 1, x)
                {
                    if(a[j])
                    {
                        mv += (j - i) - 1;
                        i = j - 1;
                        //cout << j << ' ' << i << ' ' << mv << endl;
                        break;
                    }
                }
            }
        }

        int p = 0, q = 0;
        lop(x)
        {
            if(!a[i]) p++;
            else break;
        }
        for(int i = x - 1; i >= 0; i--)
        {
            if(!a[i]) q++;
            else break;
        }

        cout << mv << '\n';
        //cout << test << '\n';
    }

    return 0;
}

