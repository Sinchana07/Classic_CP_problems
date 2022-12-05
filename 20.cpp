#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long s,n;
    cin>>s>>n;
    long long a[n][2];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            cin>>a[i][j];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<1; j++)
            {
                if(a[i][0]>s){
                cout<<"NO";
                exit (0);}
                if(a[i][0]<s)
                s+=a[i][1];
            }
        }
        cout<<"YES";
    return 0;
}