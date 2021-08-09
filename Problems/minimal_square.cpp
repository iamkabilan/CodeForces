#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		if(b>a) {
			a=a*2;
			if(a<b) {
				a=b;
			}
			cout<<a*a<<endl;
		} else {
			b=b*2;
			if(a<b) {
				a=b;
			}
			cout<<a*a<<endl;
		}
	}
}