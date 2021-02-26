#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<algorithm>
 
using namespace std;
int main(){
    long long int a=0,b=0,c,d,i,j,n,m,ck=0;
    scanf("%lld %lld", &n, &a);
    for(i=1; i<=a; i++){
           b = n%10;
    if(b==0){
        n/=10;
    }else{
        n-=1;
    }
    }
    printf("%lld\n",n);
}
