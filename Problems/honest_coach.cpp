#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		ll min;
		ll arr[n];
		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}

	    int size= sizeof(arr) / sizeof(arr[0]);

    	sort(arr, arr + size);
		if(n>=2) {
			min=abs(arr[0]-arr[1]);
		} else {
			min=arr[0];
		}
		for(int i=1;i<n;i++) {
			int temp=abs(arr[i-1]-arr[i]);
			if(temp<min) {
				min=temp;
			}
		}

		cout<<min<<endl;
	}
}