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
        int x,y,z;
        cin>>x>>y>>z;
        if(10*x >= y)
        {
            cout<<y*z<<endl;
        }
        else
        {
            cout<<10*x*z<<endl;
        }
        t--;
    }
	return 0;
}
