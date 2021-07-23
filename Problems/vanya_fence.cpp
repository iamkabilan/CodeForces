#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,h,arr[100000];
	int count=0;

	cin>>n>>h;
	for(int i=0;i<n;i++) {
		cin>>arr[i];

		if(arr[i]>h) {
			count+=2;
		}else {
			count+=1;
		}
	}


	cout<<count<<endl;
}