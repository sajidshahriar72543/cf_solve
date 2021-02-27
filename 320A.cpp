#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string num;

    cin >> num;

    int n = num.size();

    lop(0, n)
    {
        if(num[i] != '1' and num[i] != '4') {
            no;
            return 0;
        }

        if(i < n - 3 and num[i] == '1' and num[i + 1] == '4' and num[i + 2] == '4' and num[i + 3] != '1') {
            no;
            return 0;
        }

        if(num[i] == '4' and i == 0)
        {
            no;
            return 0;
        }
    }

    yes;

    return 0;
}

