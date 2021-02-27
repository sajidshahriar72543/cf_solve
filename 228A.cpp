#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n[4], a = 0;;

    for(int i = 0; i < 4; i++)
    {
        cin >> n[i];
    }

    sort(n, n + 4);

    for(int i = 0; i < 3; i++)
    {
        if(n[i] == n[i + 1])
            a++;
    }

    cout << a << endl;

    return 0;
}

