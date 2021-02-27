#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define lop(i, a, b) for(ll i = a; i < b; i++)

int b2d(string s)
{
    int x = 0, n = s.size(), p = n;
    lop(i, 0, n)
    {
        x += (1 << --p) * (s[i] - '0');
    }
    return x;
}

string d2b(int n)
{
    string s;
    while(n)
    {
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(s.begin(), s.end());

    return s;
}

int a, b, k;

bool check(string s)
{
    int o = 0, z = 0;
    lop(i, 0, s.size())
    {
        o += s[i] == '1';
        z += s[i] == '0';
    }

    return z == a and o == b;
}
bool check2(string s)
{
    int o = 0;
    lop(i, 0, s.size())
    {
        o += s[i] == '1';
    }

    return o == k;
}

int main()
{
    cin >> a >> b >> k;

    string s, anss, anst;
    lop(i, 0, a) s += '0';
    lop(i, 0, b) s += '1';

    int c = 0;
    do
    {
        c++;
        if(s[0] == '0') continue;

        int y = b2d(s);
        //lop(i, 0, 100)
        //{
            int i = (1 << k) - 1;
            int x = i + y;
            string t = d2b(x);

            if(check(t) and check2(d2b(i)))
            {
                anss = s;
                anst = t;
//                cout << i << ' ' << d2b(i) << '\n';
//                cout << x << ' ' << t << '\n';
//                cout << y << ' ' << s << '\n';
//                break;
            }
        //}

        //cout << x << ' ' << y << ' ' << s << ' ' << t << '\n';
    }
    while(next_permutation(s.begin(), s.end()));

    if(anss == "" or anst == "")
        cout << "No\n";
    else
        cout << "Yes\n" << anst << endl << anss << endl;

    //main();
}
