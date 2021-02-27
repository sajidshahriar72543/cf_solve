#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, count1, count2, flag;
    string s;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        cin >> s;
        //cout << s << endl;
        count1 = 0;
        for(i = 0; i < s.size(); )
        {
            //cout << "Entered into loop\n";
            if(s[i] == '1' && s[i + 1] == '0')
            {
               // cout << "Entered into condition\n";
                count2 = 0;
                for(j = i + 1; ; j++)
                {
                    if(s[j] == '0')
                        count2++;
                    else if(s[j] == '1') {
                        i = j;
                        break;
                    }
                    else {
                        count2 = 0;
                        i = j;
                        break;
                    }
                }
                count1 += count2;
            }
            else
                i++;
        }
        cout << count1 << endl;
        s.clear();
    }

    return 0;
}
