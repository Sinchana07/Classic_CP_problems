#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    int c=0;
    cin>>m>>n>>k;
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        a[i][j]=i+j+2;
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++){
        if(a[i][j]==k)
        c++;
        }
    }
    cout<<c;
    return 0;
}