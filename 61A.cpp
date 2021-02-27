#include<bits/stdc++.h>

using namespace std;

#define lop(n) for(int i = 0; i < n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define lopr(a, n) for(int i = 0; i < n; i++)

int main()
{
    string a, b;

    cin >> a >> b;

    lop(a.size()) {
        if(a[i] == b[i]) cout << 0;
        else cout << 1;
    }

    cout << endl;

    return 0;
}
