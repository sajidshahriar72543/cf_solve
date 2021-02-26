#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
 
int main()
 {
     string a;
     cin >> a;
     int i, count=0;
     for(i=0; i<a.size(); i++){
        if(a[i]==tolower(a[i]))
            count++;
     }
     if(count==0){
        for(i=0; i<a.size(); i++)
            a[i]=tolower(a[i]);
        cout<< a <<endl;
    }
     else if(count==1 && a[0]==tolower(a[0])){
        a[0]=toupper(a[0]);
        for(i=1; i<a.size(); i++)
            a[i]=tolower(a[i]);
        cout<< a <<endl;
     }
     else
        cout<< a <<endl;
 
     return 0;
 }
