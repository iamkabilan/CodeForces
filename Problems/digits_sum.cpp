#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int s(int x) {
	int rem,sum=0;
	while(x>0) {
		rem=x%10;
		sum=sum+rem;
		x=x/10;
	}
	return sum;
}

int splus(int x) {
	x=x+1;
	int rem,sum=0;
	while(x>0) {
		rem=x%10;
		sum=sum+rem;
		x=x/10;
	}
	return sum;
}
int main() {
	//cout<<s(5)<<endl;
	//cout<<splus(223)<<endl;

	int t;
	cin>>t;
	for(int i=0;i<t;i++) {
		int n,intresting=0;
		cin>>n;

		for(int x=1;x<=n;x++) {
			if(s(x)<splus(x)) {
				intresting+=1;
			}
		}
		cout<<n-intresting<<endl;
	}
}