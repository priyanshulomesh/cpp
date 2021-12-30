#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],x,pos,i,n;
    cout<<"ENter size of array"<<endl;
    cin>>n;
    cout<<"Enter array in ascending order"<<endl;
    for ( i = 0; i < n; i++)
    {
    cin>>a[i];
    }
    cout<<"enter element to insert"<<endl;
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(a[i]<=x&&x<a[i+1])
        {
            pos=i+1;
            break;
        }
    }
    for(i=n+1;i>pos;--i)
    {
        a[i]=a[i-1];
    }
    a[pos]=x;
    cout<<"after insertion array"<<endl;
    for(i=0;i<n+1;i++){
    cout<<a[i];
    }
    return 0;
}