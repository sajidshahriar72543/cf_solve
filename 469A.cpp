#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    bool a[n] = {0};

    int x, y;

    for(int i = 0; i < 2; i++) {
        cin >> x;
        for(int j = 0; j < x; j++)
            cin >> y, a[--y] = 1;
    }

    if(count(a, a + n, 0))
        cout << "Oh, my keyboard!\n";
    else
        cout << "I become the guy.\n";

    return 0;
}
