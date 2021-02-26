#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; cin>>a>>b>>c;
    int arr[5];
    int d,e,f,g;
    arr[0] = a+b*c;
    arr[1] = a*(b+c);
    arr[2]= a*b*c;
    arr[3] = (a+b)*c;
    arr[4] = a+b+c;
    arr[5]= a*b*c;
 
    for (int i = 0; i < 5; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout<<arr[0]<<endl;
    return 0;
}
