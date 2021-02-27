#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i, one = 0, two = 0, three = 0, four = 0, sum = 0;
    //freopen("158B Testcase.txt", "r", stdin);
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 1)
            one++;
        else if(x == 2)
            two++;
        else if(x == 3)
            three++;
        else
            four++;
    }

    sum += four;

    int p = two % 2;
    sum += ((two - p)/ 2.0);

    sum += three;
    one -= three;

    if(one > 0)
        sum += ceil((one + (2 * p)) / 4.0);
    else
        sum += p;

    cout << sum << endl;

    return 0;
}
