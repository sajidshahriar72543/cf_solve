#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main()
{
    int n;

    cin  >> n;

    int a, ek = 0, dui = 0;

    lop(0, n)
    {
        cin >> a;
        ek += (a == 100);
        dui += (a == 200);
    }

    if((ek + (dui * 2)) % 2 or (ek == 0 and dui % 2))
        no;
    else
        yes;

    return 0;
}
