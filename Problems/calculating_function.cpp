#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll f(ll n) {
	if(n%2==0) {
		n=n/2;
	} else {
		n=n/2;
		n=n+1;
		n=-n;
	}

	return n;
}

int main() {
	ll n;
	cin>>n;
	cout<<f(n)<<endl;
	
}