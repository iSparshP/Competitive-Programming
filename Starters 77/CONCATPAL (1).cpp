#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        int n,m;
        cin>>n>>m;
        string str1,str2;
        cin>>str1>>str2;
        map<char,int>frequency;
        if(m>n)
        {
            swap(m,n);
            swap(str1,str2);
        }
        for(ll i=0;i<n;i++)
        {
            frequency[str1[i]]++;
        }
        for(ll i=0;i<m;i++)
        {
            frequency[str2[i]]--;
        }
        int flag=1, counter=0, difference=n-m;
        for(auto iterator: frequency)
        {
            if(iterator.second<0)
            {
                flag=0;
                break;
            }
            if(iterator.second % 2 ==0)
            {
                continue;
            }
            if(counter)
            {
                flag=0;
            }
            else
            {
                counter=1;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
	return 0;
}
