#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n;

    cin >> n;

    int ar[n];
    vector <int> uniq;

    for(i = 0; i < n; i++)
        cin >> ar[i];
    for(i = n - 1; i >= 0; i--)
    {
        if(count(uniq.begin(), uniq.end(), ar[i]) == 0)
            uniq.push_back(ar[i]);
    }

    reverse(uniq.begin(), uniq.end());

    cout << uniq.size() << endl;
    for(i = 0; i < uniq.size(); i++)
        cout << uniq[i] << " ";

    cout << endl;

    return 0;
}
