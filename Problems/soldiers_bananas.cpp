#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int k,w,n;
	int total=0;

	cin>>k>>n>>w;

	for(int i=1;i<=w;i++) {
		total+=i*k;
	}

	total=total-n;
	if(total<0) {
		cout<<0<<endl;
	} else {
		cout<<total<<endl;
	}
	
}