#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    int a[n][m],b[p][q],s[m][p];
    if(m==p)
    {
        for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        cin>>a[i][j];
        for(int i=0; i<p; i++)
        for(int j=0; j<q; j++)
        cin>>b[i][j];
        for(int i=0; i<n; i++)
        for(int j=0; j<q; j++)
        {
            s[i][j]=0;
            for(int k=0; k<m; k++)
            s[i][j]=s[i][j]+(a[i][j]*b[i][j]);

        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<p; j++)
            cout<<s[i][j]<<" ";
            cout<<"\n";
        }
        
        
    }
    else 
    cout<<"Cannot be multiplied";
    return 0;
}