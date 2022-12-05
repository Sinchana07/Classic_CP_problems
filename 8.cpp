#include <bits/stdc++.h>
using namespace std;
int l(int a[], int n){
    int l=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>l)
        {
            l=a[i];

        }
        
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==l){
        cout<<i;
        break;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    l(a,n);
    return 0;
}