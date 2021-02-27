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

    cin >> test;

    while(test--)
    {
        cin >> x;

        int a[x];

        lop(x) a[i] = a[i + 1];

        cout << 2 << endl;

        for(int i = n - 1; i > 0; i--)
        {
            cout << a[i] << ' ' << a[i - 1];

            a[i - 1] = ceil((a[i] + a[i - 1])/ 2);
        }
    }

    return 0;
}
