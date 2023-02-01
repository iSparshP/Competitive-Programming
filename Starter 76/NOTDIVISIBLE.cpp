#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define f() for(ll i=0;i<n;i++)

int main() {
ios::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        f()
        {
            if(i%2 ==0)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
        t--;
    }
	return 0;
}
