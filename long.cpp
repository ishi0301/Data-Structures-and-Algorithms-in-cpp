#include<bits/stdc++.h>
using namespace std;
void longest(int a[],int n)
{
    int res=0,curr;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])!=s.end())
        {
            curr=1;
            while(s.find(a[i]+curr)!=s.end()))
                curr++;
        }
    }
    res=max(res,curr);
    return res;
}
/*int longest(int a[],int n)
{
    sort(a,a+n);
    int res=1,curr=0;
    for(int i=0;i<n;i++)
    {

        if(a[i]==a[i-1]+1)
            curr++;
        else
        {
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}
*/int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<longest(a,n);
}
