#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0;
	string str;
	cin>>str;
	
	for(int i=0;i<n;i++) {
		if(i!=0) {
			if(str[i]==str[i-1]) {
				count=count+1;
			}
		}
	}
	cout<<count<<endl;
}