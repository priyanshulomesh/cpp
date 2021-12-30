#include<bits/stdc++.h>
using namepsace std;

int main(){

    int t;
    cin>>t;
    while(t--){


        int n;
        cin>>n;
        string s;
        cin>>s;
        int cz=0;
        int co=0;
        int ans;
        for(int i=0;i<n;i++){
                if(s[i]==0)
                cz++;
        }
        co=n-cz;
        if(cz<2 || co<2)
            ans=0;
        else{

            ans=min(co,cz)-1;
        }
        
        cout<<ans<<endl;
    }
}