#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t; 
    while(t--){
    cin>>a>>b>>c;
    if(a+b<=c || b+c<=a || c+a<=b)
    cout<<"NO\n";
    else 
    cout<<"YES\n";
    }
    return 0;
}