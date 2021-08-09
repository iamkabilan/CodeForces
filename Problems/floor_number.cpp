#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		int floor=1;
		for(int i=3;i<=n;i=i+x) {
			floor=floor+1;
		}

		cout<<floor<<endl;
	}
}