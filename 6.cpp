#include<iostream>
//binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[50],i,n,k;
    cout<<"enter size of array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to search"<<endl;
    cin>>k;
    for(i=0;i<n;i++){
        if(a[i]==k){
            break;
        }
    }
    cout<<"element found at "<<i<<endl;
    return 0;

}