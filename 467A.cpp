#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a,b,cnt=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        if(b-a>=2) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
