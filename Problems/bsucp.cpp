#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int total=0;
	for(int i=0;i<n;i++) {
		int p,q;
		cin>>p>>q;
		int rem=q-p;
		if(rem>=2) {
			total+=1;
		}
	}
	cout<<total<<endl;
}