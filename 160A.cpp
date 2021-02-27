#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, flag = 0, sum1 = 0, sum2 = 0, inp;
    vector <int> coin;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> inp;
        coin.push_back(inp);
    }

    sort(coin.begin(), coin.end(), greater <int> ());

//    for(i = 0; i < coin.size(); i++) {
//        cout << coin.at(i) << endl;
//    }

    for(i = 0; i < coin.size(); i++) {
        sum1 = 0;
        for(j = 0; j <= i; j++) {
            sum1 += coin[j];
        }
        sum2 = 0;
        for(j = i + 1; j < coin.size(); j++) {
            sum2 += coin[j];
        }

        if(sum1 > sum2) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
