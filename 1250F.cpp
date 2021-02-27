#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, y;
    vector <int> div;

    cin >> n;

    int l = sqrt(n * 1.0);

    for(i = 1; i <= l; i++)
    {
        if(i * i == n)
            div.push_back(i);
        else if(n % i == 0) {
            div.push_back(i);
            div.push_back(n / i);
        }
    }

    sort(div.begin(), div.end());

    l = div.size();

    i = div[l / 2];
    l = n / i;

    cout << i + l + i + l << endl;

    return 0;
}
