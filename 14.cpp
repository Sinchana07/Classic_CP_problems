#include <bits/stdc++.h>
using namespace std;
int no_of_paths(int m, int n)
{
    if(m==1|| n==1)
    return 1;
    return no_of_paths(m,n-1)+no_of_paths(m-1,n);
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<no_of_paths(m,n);
    return 0;
}