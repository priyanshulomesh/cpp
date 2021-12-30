#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[50],i,n,s,l;
    cout<<"entre size of array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s=l=a[n-1];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
        if(a[i]<s)
        {
            s=a[i];
        }
    }
cout<<l<<endl;
cout<<s<<endl;
    return 0;
}