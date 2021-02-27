#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    int n;

    cin >> n;

    lop(1, sqrt(n) + 2)
    {
        if(n % i == 0)
            cout << i << " " << n / i << '\n';
    }
}
