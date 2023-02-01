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
        string s;
        int countzero=0;
        int countone=0;
        cin>>s;
        f() 
        {
            if(s[i]== '0')
            {
                countzero++;
            }
            else
            {
                countone++;
            }
        }
        if(countone == 0)
        {
            cout<<0<<endl;
        }
        else if(countzero == 0)
        {
            cout<<1<<endl;
        }
        else if(countone>countzero)
        {
            cout<< (countzero + 1) <<endl;
        }
        else 
        {
            cout<<(countone)<<endl;
        }
        t--;
    }
	return 0;
}
