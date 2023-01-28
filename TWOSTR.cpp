#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
		int num=0;
		string b,c;
		cin >> b>> c;
		for (int i=0;i<c.length();i++){
			if (b[i]!=c[i] && (b[i]!='?' && c[i]!='?')){
				num=1;
				break;
			}
		}
		cout << ((num==1) ? "No" : "Yes" ) << endl;
        t--;
    }
	return 0;
}
