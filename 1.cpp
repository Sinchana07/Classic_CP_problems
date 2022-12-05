#include <bits/stdc++.h>
using namespace std;

    int sum(int a[100],int n)
    {
        int sum=0;
        for(int i=0; i<n; i++)
        sum+=a[i];
        return sum;
    }
    int main()
    {
        int a[100],n;
        cout<<"Enter the size of the array";
        cin>>n;
        for(int i=0; i<n; i++)
        cin>>a[i];
        cout<<"Sum of array is"<<sum(a,n);
        return 0;

    }
    
