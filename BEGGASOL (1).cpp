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
        int arr[n];
        f() cin>>arr[i];
        int fuel=0,d=0;
        f(){
            fuel += arr[i];
            if(fuel==0) break;
              fuel--; d++;
        }
        cout<<fuel+d<<endl;
        
        t--;
    }
	return 0;
}
