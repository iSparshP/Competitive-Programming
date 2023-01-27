#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        unordered_set <int> s;
        for(int i=a; i<=b; i++)
        {
            s.insert(i);
        }
        for(int i=c; i<=d; i++)
        {
            s.insert(i);
        }
        cout<<s.size()<<endl;
        t--;
    }
	return 0;
}
