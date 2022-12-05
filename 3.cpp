#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a[100], int n)
{
    bool p=true;
    for(int i=0; i<n; i++)
    {
        p=true;
        if(a[i]==0 || a[i]==1)
        p=false;
        else{
            for(int j=2; j<=a[i]/2; j++)
            {
            if(a[i]%2==0)
            {
            p=false;
            break;
            }
            }
        }
        if(p)
        cout<<a[i]<<" is a prime number\n ";
        else
        cout<<a[i]<<" is not a prime number\n";
        
    }
return 0;
}
int main()
{
    int a[100],n;
    cout<<"Enter the number of integers\n";
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>a[i];
    isPrime(a,n);
    return 0;
}