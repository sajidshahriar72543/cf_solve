#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, counter = 0;
    string color;

    cin >> n;

    cin >> color;

    getchar();

    //sort(color.begin(), color.end());

    for(int i = 0; i < color.size() - 1; i++) {
        if(color[i] == color[i + 1])
            counter++;
    }
//cout << color << endl;
    cout << counter << endl;

    return 0;
}
