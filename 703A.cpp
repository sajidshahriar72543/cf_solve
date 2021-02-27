#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test, y, m = 0, c = 0;

    cin >> test;

    while(test--)
    {
        cin >> x >> y;

        if(x > y)
            m++;
        if(x < y)
            c++;
    }

    if(m > c)
        cout << "Mishka";
    if(m < c)
        cout << "Chris";
    if(m == c)
        cout << "Friendship is magic!^^";

    return 0;
}
