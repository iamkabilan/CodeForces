#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int x,y,n,t;
	int max=0;

	cin>>t;

	for(int j=0;j<t;j++) {
	cin>>x>>y>>n;


	
	for(int i=n;i>=0; i=i-x+1) {
		
		if(i%x==y) {
			max=i;
			break;
		}
	}

	cout<<max<<endl;	
	}

}