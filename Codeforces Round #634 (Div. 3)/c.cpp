#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, n, t, teams, inp, eq, dis, maxeq, i;
    vector <long long> st;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i = 0; i < n; i++)
        {
            cin >> inp;
            st.push_back(inp);
        }

        if(n == 1) {
            cout << 0 << "\n";
            st.clear();
            continue;
        }

        eq = dis = maxeq = 0;
        sort(st.begin(), st.end());


        for(i = 1; i < n; i++)
        {
            if(st[i] != st[i - 1]) {
                dis++;

                if(maxeq < eq) {
                    maxeq = eq;
                    eq = 0;
                   // cout << "maxeq " << maxeq << endl;
                }
                eq = 0;
            }
            else {
                eq++;
                //cout << "eq = " << st[i] << endl;
            }
        }

        if(eq > maxeq)
            maxeq = eq;

        maxeq++;
        dis++;

        //cout << dis << " " << maxeq << endl;

        if(maxeq == dis)
            cout << dis - 1 << endl;
        else
            cout << min(dis, maxeq) << "\n";

        st.clear();
    }

    return 0;
}

