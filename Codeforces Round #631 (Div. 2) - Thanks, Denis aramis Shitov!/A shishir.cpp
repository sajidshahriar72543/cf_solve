#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,l,m=1,h;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&x);
        vector<int>a;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&l);
        a.push_back(l);
        }
        while(x!=0)
        {
            if (count(a.begin(), a.end(),m))
            {
              h=m;
            }
            else{
                x--;}
                m++;
        }
        if (count(a.begin(), a.end(),m)){
        printf("%d\n",m);}
        else
        {
           printf("%d\n",m-1);
        }
        m=1;
    }
    return 0;
}
