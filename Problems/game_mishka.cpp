#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin>>n;
	ll mishka=0;
	ll chris=0;

	for(int i=0;i<n;i++) {
		int temp1,temp2;
		cin>>temp1>>temp2;
		if(temp1>temp2) {
			mishka+=1;
		}
		if(temp2>temp1) {
			chris+=1;
		}
		if(temp1==temp2) {

		}
	}

	if(mishka>chris) {
		cout<<"Mishka"<<endl;
	}

	if(chris>mishka) {
		cout<<"Chris"<<endl;
	}

	if(chris==mishka) {
		cout<<"Friendship is magic!^^"<<endl;
	}
}