#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int i, j, l, count_zero, count_one;
    char team[101];
    cin >> team;

    l = strlen(team);
    for(i = 0; i < l; i++) {
        count_zero = 0;
        for(j = i; ; j++) {
            if(team[j] == '0')
                count_zero++;
            else
                break;
        }
        if(count_zero < 7) {
            i = j;
            continue;
        }
        else
            break;
    }

    for(i = 0; i < l; i++) {

        for(j = i; ; j++) {
            if(team[j] == '1')
                count_one++;
            else
                break;
        }
        if(count_one < 7) {
            i = j;
            count_one = 0;
            continue;
        }
        else
            break;
    }

    if(count_one >= 7 || count_zero >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
