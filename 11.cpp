#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,m1,n2,m2;
    cin>>n1>>m1>>n2>>m2;
    int a[n1][m1],b[n2][m2],s[n1][m1];
    if(n1==n2 && m1==m2)
    {
        for(int i=0;i<n1; i++)
        for(int j=0; j<m1; j++)
        cin>>a[i][j];
        for(int i=0; i<n2; i++)
        for(int j=0; j<m2; j++)
        cin>>b[i][j];
        for(int i=0; i<n1; i++)
        for(int j=0; j<m1; j++)
        s[i][j]=a[i][j]+b[i][j];
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<m1; j++)
            cout<<s[i][j]<<" ";
            cout<<"\n";
        }
        
    }
    else
    cout<<"Cannot be added";
    return 0;
}