#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	int n;
	cin>>a;
	cin>>b;
	n=a.length();
	string out="YES";
	for(int i=0;i<n;i++) {
		if(a[i]==b[n-1-i]) {
			out="YES";
		} else {
			out="NO";
			break;
		}
	}

	cout<<out<<endl;
}