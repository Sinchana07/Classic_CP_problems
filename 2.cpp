#include <bits/stdc++.h>
using namespace std;
int index(int a[100],int n,int k)
{
    int f=-1,l=-1;
    for(int i=0; i<n; i++)
{
    if(a[i]==k && f==-1)
    f=i;
    if(a[i]==k && f!=-1)
    l=i;
}
if(f!=-1)
cout<<"First index of "<<k<<" is "<<f<<"\nLast index of "<<k<<" is "<<l;
else
cout<<k<<" not found";
return 0;
}
    
    

int main()
{
    int a[100],n,i,k;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter"<<n<<" array elements\n";
    for(i=0; i<n; i++)
    cin>>a[i];
    cout<<"Enter k value\n";
    cin>>k; 
    index(a, n,k);
    return 0;

}