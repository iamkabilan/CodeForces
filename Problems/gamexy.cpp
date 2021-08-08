#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	int p1;
	cin>>n;
	cin>>p1;

	int arr1[p1];
	int sol[n+1];
	for(int i=1;i<=n;i++) {
		sol[i]=0;
	}
	for(int i=0;i<p1;i++) {
		cin>>arr1[i];
	}
	int p2;
	cin>>p2;
	int arr2[p2];
	for(int i=0;i<p2;i++) {
		cin>>arr2[i];
	}

	for(int i=1;i<=n;i++) {
		for(int j=0;j<p1;j++) {
			if(arr1[j]==i) {
				sol[i]=1;
			}
		}
	}

	for(int i=1;i<=n;i++) {
		for(int j=0;j<p2;j++) {
			if(arr2[j]==i) {
				sol[i]=1;
			}
		}
	}

	int val=0;
	for(int i=1;i<=n;i++) {
		if(sol[i]!=1) {
			cout<<"Oh, my keyboard!"<<endl;
			val=1;
			break;
		} else {
			val=0;
		}
	}
	if(val==0) {
		cout<<"I become the guy."<<endl;
	}
}