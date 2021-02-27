#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, n, t, i, j, k, x;
    string s;
    char p;

    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b;

        //x = 0;
        for(x = 0; x < n;)
        {
            for(j = 0; j < a && x < n;)
            {
            p = 'a';
            for(k = 0; k < b && x < n; k++)
            {
                s = s + p;
                p++;
                x++;
            }

            j += k;
            }
        }

        cout << s << endl;

        s.clear();
    }

    return 0;
}

