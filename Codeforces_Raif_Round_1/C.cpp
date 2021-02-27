#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> s;
        int x = s.size(), n = x;

        int a = 0, b = 0;

        lop(n)
        {
            if(s[i] == 'A')
                a++;
            else
            {
                if(a)
                    a--, x -= 2;
                else if(b)
                    b--, x -= 2;
                else
                    b++;
            }
        }

        cout << x << '\n';
    }

    return 0;
}
