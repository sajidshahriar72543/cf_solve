#include<bits/stdc++.h>
using namespace std;

int main()
{
	string line, line2, line3;
	int counter[26], i, flag = 0;
	//vector <int>

	for (i = 0; i < 26; i++)
		counter[i] = 0;

	cin >> line;

	int n = line.size(), ct[26] = {0};
	vector <int> cnt;
	vector <char> ch;

	int c = 1;
	for (int i = 1; i < n; i++)
	{
		if (line[i] == line[i - 1])
			c++;
		else
		{
			ch.push_back(line[i - 1]);
			ct[line[i - 1] - 'A']++;
			cnt.push_back(c);
			c = 1;
		}
	}
	ch.push_back(line[n - 1]);
	ct[line[n - 1] - 'A']++;
	cnt.push_back(c);


	int ans = 0; c = 0;
	for (i = 0; i < cnt.size(); i++)
	{
		if (cnt[i] < 3)
		{
			if (c)
			{
				ans = 0;
				break;
			}

			c = 1;
			if (!i or i == cnt.size() - 1)
				ans = cnt[i];
			else
			{

			}
		}
	}

	/*for(i = 0; i < line.size(); i++)
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

	line2 = line;
	int s = line.size();

	while(1)
	{
	    if(line2[0] != line2[s - 1])
	    {
	        cout << 0 << endl;
	        return 0;
	    }
	    line3 = line2;
	    for(i = 1; i < line2.size(); i++)
	    {
	        if(line2[i] == line2[0])
	        {
	            line2.erase(line2.begin() + i);
	            cout << line2[i] << endl;
	        }
	    }
	    line2.erase(line2.begin() + 0);
	    if(line2.size() == 0) {
	        cout << line3.size() + 1 << endl;
	        return 0;
	    }
	    line3.clear();
	}*/


}
