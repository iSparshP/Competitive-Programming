#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        string stru;
        cin>>stru;
        int n=stru.size();
        bool chk=1;
        int ans=0;
        for(int i=0;i<n;i++){
            if(chk){
                if(stru[i]=='1') continue;
                else {
                    ans+=1;
                    chk^=1;
                }
            }
            else{
                if(stru[i]=='0') continue;
                else{
                    ans+=1;
                    chk^=1;
                }
            }
        }
        cout<<ans<<"\n";
        t--;
    }
	return 0;
}
