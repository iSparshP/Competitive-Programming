#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
	    int num,counter=0;
	    cin>>num;
	    string st;
	    cin>>st;
	    for(int i=0;i<num;i++){
	        if(st[i]=='1'){
	            counter++;
	        }
	    }
	    if(num<=2&&counter<2)
	        cout<<"NO"<<endl;
	    else if(counter>3)
	        cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	   
        t--;
    }
	return 0;
}


