#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    int x, test;

    cin >> test;

    while(test--)
    {
        int n, m;

        cin >> n >> m;

        int a[n], f[n] = {0};

        lop(n) cin >> a[i];
        lop(m) cin >> x, f[--x] = 1;

        lop(n) 
        {
            loop(j, 0, n - i - 1)
            {
                if(a[j] > a[j + 1] and f[j]) 
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }

        bool k = 1;

        lop(n - 1) if(a[i] > a[i + 1]) k = 0;

        if(k) yes;
        else no;
    }

    return 0;
}
