#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int sum)
{
    unordered_set<int>set;
    for(int i=0;i<n;i++)
    {
        int comp=sum-a[i];
        if(set.find(comp)!=set.end())
            return true;
        set.insert(a[i]);
    }
    return false;
}
int main()
{
     int n,s,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        cin>>sum;
    cout<<check(a,n,sum);
    return 0;
}
