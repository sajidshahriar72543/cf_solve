#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, bil[2] = {0};

    cin >> n;

    int a[n], t;

//    for(int i = 0; i < n; i++)
//        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        cin >> t;

        if(t == 25)
        {
            bil[0]++;
        }

        else if(t == 50)
        {
            if(bil[0] > 0)
                bil[0]--, bil[1]++;

            else
            {
                cout << "NO\n";
                return 0;
            }
        }

        else
        {
            if(bil[0] > 0 and bil[1] > 0)
                bil[0]--, bil[1]--;

            else if(bil[0] > 2)
                bil[0] -= 3;

            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}
