#include<bits/stdc++.h>
using namespace std;
int distcandies(int a[],int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    int types=s.size();
    if(types>=n/2)
        return n/2;
    else
        return types;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<distcandies(a,n);
    return 0;
}
