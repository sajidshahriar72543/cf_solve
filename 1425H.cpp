#include<bits/stdc++.h>

using namespace std;

#define yes "Ya"
#define no "Tidak"

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, test, a, b, c, d;

    cin >> test;

    string box[4];

    while(test--)
    {
        cin >> a >> b >> c >> d;

        for(int i = 0; i < 4; i++) box[i] = no;

        if((a + b) % 2 and (a or d))
        	box[0] = yes;

        if((a + b) % 2 and (b or c))
        	box[1] = yes;

        if(!((a + b) % 2) and (b or c))
        	box[2] = yes;

        if(!((a + b) % 2)  and (a or d))
        	box[3] = yes;

        for(int i = 0; i < 4; i++)
        	cout << box[i] << ' ';
        cout << '\n';

    }

    return 0;
}