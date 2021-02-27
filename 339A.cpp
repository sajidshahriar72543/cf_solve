#include<bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
    int i, j, k, l, temp;
    char math[101];
    vector <int> number;

    cin >> math;

    l = strlen(math);
    for(i = 0, j = 0; i < l; i++) {
        if(math[i] >= '0' && math[i] <= '9')
            number.push_back(math[i] - 48);
    }

    sort(number.begin(), number.end());

    //cout << number ;

    for(i = 0; i < number.size(); i++) {
        cout << number.at(i);
        if(i < l / 2)
            cout << '+';
    }

    cout << endl;

    return 0;
}
