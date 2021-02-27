#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "1\n"
#define no cout << "2\n"

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    int x, test, n;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n;

        cin >> s;

        if(n == 1)
        {
            if((s[0] - '0') % 2) yes;
            else no;
            continue;
        }

        int od = 0, ev = 0;

        lop(n)
        {
            int p = i + 1, q = s[i] - '0';

            if(p % 2 and q % 2)
                od++;

            else if(p % 2 != 1 and q % 2 != 1)
                ev++;
        }

//        cout << od << ' ' << ev << '\t';

        x = n / 2;

        if(od and n % 2) yes;
        else if(ev and n % 2 == 0) no;
        else if(od and !ev) yes;
        else if(!od and ev) no;
        else if(!od and !ev)
        {
            if(n % 2) no;
            else yes;
        }
    }

    return 0;
}
