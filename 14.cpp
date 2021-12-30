#include<iostream>
using namespace std;
bool check(bool* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int p,r;
    cout<<"enter no of processes and resources"<<endl;
    cin>>p>>r;
    int i,j,a1[p][r],a2[p][r],a3[r];
    bool a4[p]={false};
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        {
            cin>>a1[i][j];
            cin>>a2[i][j];
            a2[i][j]-=a1[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        cin>>a3[i];
    }
    //input over
    
for(i=0;i<p;i++)
{
    if(a4[i]==true)
    continue;
    int flag=0;
    for(j=0;j<r;j++)
    {
        if(a2[i][j]>a3[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(j=0;j<r;j++)
        {
            a3[j]+=a1[i][j];
        }
        cout<<"P"<<i<<endl;
        a4[i]=true;
    }
    if(i==(p-1)&&!check(a4,p))
    {
        i=-1;
    }
}
    return 0;
}