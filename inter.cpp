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
   {
      if(s.find(b[i])!=s.end())
                cout<<a[i]<<" ";

   }
}
/* naive
void intersection(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        bool flag=false;
        for(int j=0;j<n;j++)
        {
            if(a[i]!=b[j])
            {
                flag =true;
                break;
            }
        }
        if(flag==true)
        cout<<a[j]<<" ";
    }
}
*/
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

