#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define f() for(ll i=0;i<n;i++)

int main() {
ios::sync_with_stdio(0);
cin.tie(0);
    ll t;
    cin>>t;
    while(t>0)
    {
        int n;
        int count=1;
        cin>>n;
        int arr[n];
        f() cin>>arr[i];
        int m = arr[0];
        for(ll i=1;i<n;i++)
        {
            if(m >= arr[i]){
                count++;
            }
            m = min(m, arr[i]);
        }
        cout<<count<<endl;
        t--;
    }
	return 0;
}
