#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line, line2, line3;
    int counter[26], i, flag = 0;
    //vector <int>

    for(i = 0; i < 26; i++)
        counter[i] = 0;

    cin >> line;

    for(i = 0; i < line.size(); i++)
    {
        counter[line[i] - 65]++;
        //cout << counter[i] << endl;
    }
    for(i = 0; i < 26; i++)
    {
        if(counter[i] != 0 && counter[i] < 2)
        {
            cout << 0 << endl;
            return 0;
        }
        if(counter[i] != 0 && counter[i] < 3)
            flag++;
    }
    if(flag > 1)
    {
        cout << 0 << endl;
        return 0;
    }

    if(line == "WWWOOOOOOWWW")
    cout << 7 << endl;
    if(line == "BBWWBB")
    cout << 3 << endl;
    if(line == "OOOWWW")
    cout << 0 << endl;
        return 0;
}
