#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  j,p,t;
    cin>>t;
    while(t--)
    {
        cin>>j>>p;
        string sj=to_string(j);
        string sp=to_string(p);
        int l=sj.length();
        int n=sp.length();
        int c=0;
        int d=0;
        for(int i=0; i<l; i++)
        {
            if(sj[i]=='0')
            c++;
            
        }
        for(int i=0; i<n; i++)
        {
            if(sp[i]=='0')
            d++;
        }
        if(c==d)
        {
            cout<<"JERRY\n";
    
        }
        else if (c>d)
        {
            cout<<"JERRY\n";
            
        }
        else
        cout<<"PIYUSH\n";
        
    }
    return 0;
}