#include<bits/stdc++.h>
using namespace std;
int maxdistinct(int a[],int n,int k)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    int d=s.size();
    if(d>=n/k)
        return(n/k);
    else
        return(d);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
   cout<<maxdistinct(a,n,k);
   return 0;
}
