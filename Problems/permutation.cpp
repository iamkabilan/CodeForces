#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		n=2*n;
		int arr[n];
		vector<int>v;

		for(int i=0;i<n;i++) {
			cin>>arr[i];
			int temp=arr[i];
			bool t=false;
			for(int j=0;j<v.size();j++) {
				if(v[j]==temp) {
					t=true;
				}
			}
			if(t==false) {
				v.push_back(temp);
			}
		}

		for(auto i:v) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
    return 0;
}