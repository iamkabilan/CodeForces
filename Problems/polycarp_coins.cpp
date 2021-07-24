#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++) {
		int n;
		int c1=1;
		int c2=1;
		cin>>n;
		int eq=0;
		eq=c1+(2*c2);
		while(eq<n) {
			c1=c1+1;
			c2=c2+1;
			eq=c1+(2*c2);
		}
		//cout<<c1<<' '<<c2<<' '<<eq<<endl;

		if(eq-2==n) {
			c2=c2-1;
		} 
		if(eq-1 == n) {
			c1=c1-1;
		}
		cout<<c1<<' '<<c2<<endl;
	}
}