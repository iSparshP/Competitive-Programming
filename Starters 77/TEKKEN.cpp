#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define f() for(ll i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(abs(B-C)>=A)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;            
        }
        t--;
    }
	return 0;
}
