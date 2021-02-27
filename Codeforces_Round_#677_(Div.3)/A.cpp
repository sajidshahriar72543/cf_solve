
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

    cin >> test;

    while(test--)
    {
        string s;
        cin >> s;

        x = (s[0] - '1') * 10;
        int k = s.size();
        if(k == 1)
            x += 1;
        else if(k == 2)
            x += 3;
        else if(k == 3)
            x += 6;
        else
            x += 10;

        cout << x << '\n';
    }

    return 0;
}
