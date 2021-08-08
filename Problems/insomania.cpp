#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll k,l,m,n,d;
	vector<int> v;
	cin>>k;
	cin>>l;
	cin>>m;
	cin>>n;
	cin>>d;

	if(k==1 or l==1 or m==1 or n==1) {
		cout<<d<<endl;
	} else {
		for(int i=k;i<=d;i=i+k) {
			if(find(v.begin(), v.end(), i) != v.end()){
				
			} else {
				v.push_back(i);
			}
		}

		for(int i=l;i<=d;i=i+l) {
			if(find(v.begin(), v.end(), i) != v.end()){
				
			} else {
				v.push_back(i);
			}
		}

		for(int i=m;i<=d;i=i+m) {
			if(find(v.begin(), v.end(), i) != v.end()){
				
			} else {
				v.push_back(i);
			}
		}

		for(int i=n;i<=d;i=i+n) {
			if(find(v.begin(), v.end(), i) != v.end()){
				
			} else {
				v.push_back(i);
			}
		}

		int size=v.size();
		cout<<size<<endl;
	}
}