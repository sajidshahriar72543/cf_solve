#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    double d,s1,n1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    s1=s/1.0;
    n1=n/1.0;
    d=s1/n1;
    printf("%.12lf\n",d);
    return 0;
}
