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

    int n;

    cin >> n;

    map <string, int> goal;
    string team;

    lop(0, n)
    {
        cin >> team;
        goal[team]++;
    }

    int mx = goal[team];

    for(auto it = goal.begin(); it != goal.end(); it++)
        if(it -> second > mx)
            mx = it -> second, team = it -> first;

    cout << team;

    return 0;
}

