#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
 
 
int main() {
   char s[1000];
    int h=0,sd=0;
    cin.getline(s,1000);
    for(int i=0;i<1000;i++)
    {
        if(s[i]==':' && s[i+1]=='-' && s[i+2]==')')
        {
            h++;
        }
        if(s[i]==':' && s[i+1]=='-' && s[i+2]=='(')
        {
            sd++;
        }
    }
    if(h>sd)
    {
        cout<<"happy";
    }
    else if(sd>h)
    {
        cout<<"sad";
    }
    else if(sd==h)
    {
        cout<<"notsure";
    }
    else if(h==0 && sd==0)
    {
        cout<<"none";
    }
    return 0;
}