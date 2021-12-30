#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10];
    int i,j,n,t;
    printf("enter string\n");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
        printf("%s",a);
    return 0;
}