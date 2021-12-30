#include<iostream>
//bubble sort
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j,t;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }

    for(i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
                swapped=true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
    cout<<endl;
for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}