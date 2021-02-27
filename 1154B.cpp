#include<bits/stdc++.h>

using namespace std;

void print(vector <int> x)
{
    for(int i = 0; i < x.size(); i++)
        cout << x[i] << " ";
    cout << endl;
}

int main()
{
    int t, inp, j;
    vector <int> num, num2;
    //set <int> :: iterator r = num.begin();

    cin >> t;

    while(t--)
    {
        cin >> inp;
        num2.push_back(inp);
    }

    sort(num2.begin(), num2.end());

    //print(num2);

    num.push_back(num2[0]);
   // print(num);
    for(j = 1; j < num2.size(); j++)
    {
        if(num2[j] != num2[j - 1]) {
            num.push_back(num2[j]);
            //cout << num2[j] << endl;
        }
    }

    if(num.size() > 3)
    {
        cout << -1 << endl;
        return 0;
    }

    if(num.size() == 3)
    {
        if(num[1] - num[0] == num[2] - num[1])
            cout << num[1] - num[0] << endl;
        else
            cout << -1 << endl;
    }
    else if(num.size() == 2)
    {
        if((num[0] + num[1]) % 2 == 0 || (num[1] - num[0]) % 2 == 0)
            cout << (num[1] - num[0]) / 2 << endl;
        else
            cout << num[1] - num[0] << endl;
    }
    else
        cout << 0 << endl;

    return 0;
}
