#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        long long i=0, firstones=0;
        for(; i<n; i++){
            if(s[i] == '0')
            {
                break;
            }
            firstones++;
        }
        long long flag=0, temp=0, ans=0;
        for(; i<n; i++)
        {
            if(s[i] == '1' && flag ==0)
            {
                flag =1;
                temp =0;
            }
            
            if(s[i] =='0' && flag ==1)
            {
                ans = max(ans,firstones +temp);
                flag = 0;
                temp = 0;
            }
            if(flag ==1){
                temp++;
            }
            
        }
        ans = max(ans, firstones + temp);
        cout <<ans<<endl;
        
        t--;
    }
	return 0;
}
