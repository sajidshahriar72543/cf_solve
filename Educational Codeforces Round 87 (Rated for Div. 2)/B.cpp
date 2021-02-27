#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define pb push_back
#define all(x) x.begin(), x.end()

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, n, a, b, c, d;

    string s;

    cin >> tt;

    while(tt--)
    {
        cin >> s;

        int one = -1, two = -1, tri = -1, i, j, saiz = s.size();
        vector <int> v;

        for(i = 0; i < saiz; i++)
        {
            if(s[i] == '1')
            {
                if(one == -1)
                    one = i;
                else if(two == -1 || tri == -1)
                    one = i;
            }
            else if(s[i] == '2')
            {
                if(two == -1)
                    two = i;
                else if(one == -1 || tri == -1)
                    two = i;
            }
            else if(s[i] == '3')
            {
                if(tri == -1)
                    tri = i;
                else if(two == -1 || one == -1)
                    tri = i;
            }

            if(one != -1 && two != -1 && tri != -1)
            {
                int x = max(one, max(two, tri)) - min(one, min(two, tri));
                v.push_back(x);
                one = two = tri = -1;
                if(x == 2) break;

                for(j = i - 1; j < saiz; j++)
                {
                    if(s[j] == '1')
                    {
                        if(one == -1)
                            one = j;
                        else if(two == -1 || tri == -1)
                            one = j;
                    }
                    else if(s[j] == '2')
                    {
                        if(two == -1)
                            two = j;
                        else if(one == -1 || tri == -1)
                            two = j;
                    }
                    else if(s[j] == '3')
                    {
                        if(tri == -1)
                            tri = j;
                        else if(two == -1 || one == -1)
                            tri = j;
                    }

                   // cout << j << " ";

                    if(one != -1 && two != -1 && tri != -1) break;
                }

                if(one != -1 && two != -1 && tri != -1) {
                    int x = max(one, max(two, tri)) - min(one, min(two, tri));
                    v.push_back(x);
                    one = two = tri = -1;
                    if(x == 2) break;
                }

                i = j - 2;

            }
            //cout << "i = " << i << " ";
        }

        //cout << one << " " << two << " " << tri << '\n';

        if(v.size() == 0)
            cout << 0 << '\n';
        else
        {
//            cout << '\n';
//            lop(v.size())
//                cout << v[i] << '\t';
            sort(all(v));
            cout << v[0] + 1 << '\n';
        }
    }



    return 0;
}


