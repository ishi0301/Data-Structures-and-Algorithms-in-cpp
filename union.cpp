
#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int b[],int m,int n)
{
   unordered_set<int>s;
   for(int i=0;i<m;i++)
   {
           s.insert(a[i]);
    }
   for(int i=0;i<n;i++)
    s.insert(b[i]);
   for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
   cout<<endl;
}

int main()
{
    int m,n;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    intersection(a,b,m,n);
    return 0;
}

