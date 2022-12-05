#include <bits/stdc++.h>
using namespace std;
int  psf(int a[], int n, int ps[])
{
    ps[0]=a[0];
    for(int i=0; i<n; i++)
    ps[i]=ps[i-1]+a[i];
   return 0;


}
int main()
{
    int a[100],n;
    cin>>n;
    int ps[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    psf(a,n,ps);
    for ( int i=0; i<n; i++)
    cout<<ps[i]<<" ";
    return 0;
}