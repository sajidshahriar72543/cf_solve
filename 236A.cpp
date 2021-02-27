#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter = 0;
    string name;

    cin >> name;

    getchar();

    sort(name.begin(), name.end());

    for(int i = 0; i < name.size() - 1; i++) {
        if(name[i] != name[i + 1])
            counter++;
    }
//cout << name << endl;
    if(counter % 2 != 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
//main();
    return 0;
}

