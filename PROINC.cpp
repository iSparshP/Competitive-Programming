#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int x,y;
        cin>>x>>y;
        cout<<x/10 + y<<endl;
        t--;
    }
	return 0;
}
