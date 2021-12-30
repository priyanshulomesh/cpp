#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,t;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
cout<<endl;
    for(i=1;i<n;i++)
    {
        t=a[i];
        int j=i-1;
        while(j>=0&&a[j]>t)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}