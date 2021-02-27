#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, avg, sum;
    cin >> t;
    vector <int> frnds;
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a;
            frnds.push_back(a);
        }
        sort(frnds.begin(), frnds.end());

        avg = (frnds[0] + frnds[2]) / 2;
        if(frnds[0] < avg)
            frnds[0]++;
        if(frnds[2] > avg)
            frnds[2]--;

        sum = (frnds[1] - frnds[0]) + (frnds[2] - frnds[1]) + (frnds[2] - frnds[0]);
        cout << sum << endl;
        frnds.clear();
    }

    return 0;
}
