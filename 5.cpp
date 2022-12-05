#include <bits/stdc++.h>
using namespace std;
void reverse(int a[],int n)
{
    int t;
    for(int i=0; i<n/2; i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
   
    

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    reverse(a,n);
    return 0;
}