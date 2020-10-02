#include<bits/stdc++.h>
using namespace std;
void repeat(int a[],int n)
{
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            if(s.find(a[i])!=s.end())
                cout<<a[i]<<" ";
            else
                s.insert(a[i]);9
        }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    repeat(a,n);
    return 0;
}


