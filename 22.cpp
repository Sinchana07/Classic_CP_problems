#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
 
 
int main() {
    string ch;
     cin>>ch;
     int n;
     n=ch.length();
     cout<<n;
    int a[n];
        for(int i=0; i<n; i++)
    {
       
        if(isdigit(ch[i]))
        {
            a[i/2]=ch[i];
        }
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<'+';
    }
    return 0;
}