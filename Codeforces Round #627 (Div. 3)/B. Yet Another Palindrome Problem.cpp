#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, j, inp;
    vector <int> a;

    cin >> t;

    while(t--)
    {
        cin >> n;
        int flag = 0;
        for(i = 0; i < n; i++) {
            cin >> inp;
            a.push_back(inp);
            if(i > 1)
            {
                for(j = 0; j < i - 1; j++) {
                    if(a[i] == a[j]) {
                        flag = 1;
                        break;
                        //cout << i << "\t" << a[i] << " = " << a[i - 2] << "\t" << i - 2 << endl;
                    }
                }
            }
        }

        a.clear();

        if(flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
