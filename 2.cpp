#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],b[5][5],c[5][5];
    int m,n,o,p,i,j,k;
    cout<<"no of rows and columns of 1:"<<endl;
    cin>>m>>n;
    cout<<"no of rows and columns of 2:"<<endl;
    cin>>o>>p;
    if(n=o)
    {
        cout<<"enter the first matrix:"<<endl;2
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++){
            cin>>a[i][j];
            }
        }
        cout<<"enter the second matrix:"<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++){
            cin>>b[i][j];
            }
        }
        cout<<"the new matrix is:"<<endl;
        for(i=0;i<m;i++){
            for(j=0;j<p;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
                cout<<" "<<c[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"can't be done"<<endl;
    }
  return 0;
}