#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool p(char s[]){
    int l;
    l=strlen(s);
    char d[l];
    strcpy(d,s);
    strrev(d);
           if(strcmp(s,d)==0)
        return 1;
        else 
        return 0;



   
  
}
   
int main()
{
    int n;
    cin>>n;
    char s[n];
    cin>>s;
   if( p(s))
   cout<<"is a palindrome";
   else 
   cout<<"not  a  palindrome";
    return 0;
}