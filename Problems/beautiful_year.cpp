#include <iostream>
#include <bits/stdc++.h>
#include "string.h"
using namespace std;

int validate(int arr[]) {
	if((arr[0]==arr[1]) or (arr[0]==arr[2]) or (arr[0]==arr[3]) or (arr[1]==arr[2]) or (arr[1]==arr[3]) or (arr[2]==arr[3])) {
		return true;
	}

	return false;
}

int main() {
	int n;
	int rem=0;
	int arr[4];
	cin>>n;
	int temp=n;
	n=n+1;
	for(int i=3;i>=0;i--) {
		rem=n%10;
		n=n/10;
		arr[i]=rem;
	}

	int var=validate(arr);
	int store=temp+1;
	while(var!=0) {
		store=store+1;
		n=store;
		for(int i=3;i>=0;i--) {
			rem=n%10;
			n=n/10;
			arr[i]=rem;
		}
		var=validate(arr);
	}

	string assemble="";
	for(int i=0;i<4;i++) {
		assemble+=to_string(arr[i]);
	}
	cout<<assemble<<endl;
}