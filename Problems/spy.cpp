#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}

		int a=0;
		int b=0;
		int count_a=0;
		int count_b=0;
		for(int i=0;i<n-1;i++) {
			if(arr[i]!=arr[i+1]) {
				a=i;
				b=i+1;
				break;
			}
		}
		
		for(int i=0;i<n;i++) {
			if(arr[i]==arr[a]) {
				count_a+=1;
			} else {
				count_b+=1;
			}
		}

		if(count_a<count_b) {
			cout<<a+1<<endl;
		}else {
			cout<<b+1<<endl;
		}
	}
}