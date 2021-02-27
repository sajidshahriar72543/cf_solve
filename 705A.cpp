#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    string odd = "I hate", even = "I love", addition = " that ", conclusion = " it";

    cin >> n;

    for(i = 1; i <= n; i ++)
    {
        i % 2 == 0 ? cout << even : cout << odd;

        i < n ? cout << addition : cout << conclusion << endl;
    }

    return 0;
}
