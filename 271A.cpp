#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y, i, j, a, b, c, d;

    cin >> y;

    for(i = y + 1; ; i++)
    {
        j = i;
        a = j % 10;

        j /= 10;
        b = j % 10;

        j /= 10;
        c = j % 10;

        d = j / 10;

        if(a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << i << endl;
            return 0;
        }
    }
}
