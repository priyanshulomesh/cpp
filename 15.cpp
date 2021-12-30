#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[(2*n)-1],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        a[i+n]=a[i];
    }
    //Kadenis algo
    int cunS=0,maxS=INT_MIN,count=0;
    for(i=0;i<(2*n-1);i++)
    {
        cunS+=a[i];
        count++;
        if(cunS>maxS){
            maxS=cunS;
        }
        if(count==n){
            count--;
            cunS-=a[i-n+1];
        }
        if(cunS<0)
        {
            cunS=0;
            count=0;
        }
    }
    cout<<maxS;
    return 0;
}
