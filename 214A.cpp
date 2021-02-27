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

    int n, m, c = 0;

    cin >> n >> m;

    lop(0, n + 1) lopj(0, m + 1) if(i * i + j == m and j * j + i == n) c++;

    cout << c;

    return 0;
}

