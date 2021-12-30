#include<iostream>
//bubble sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,j,n,t;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-1)-i;j++)
        {
            if(a[j]>a[j+1])
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}