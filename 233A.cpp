#include<bits/stdc++.h>

using namespace std;

#define lop(n) for(int i = 0; i < n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define lopr(a, n) for(int i = a; i < n; i++)

int main()
{
    int n;

    cin >> n;

    if(n % 2) {
        cout << -1 << endl;
        return 0;
    }

    lopr(2, n + 1) {
        cout << i << " " << i - 1 << " ";
        i++;
    }

    //cout << 1 << endl;

    return 0;
}

