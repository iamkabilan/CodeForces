#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		float arr[n];
		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}

		vector <float> v;
		for(int i=0;i<n;i++) {
			
			for(int j=i;j<n;j++) {
				float tot1=0;
				float tot2=0;
				float sum1=0;
				float sum2=0;

	 			for(int k=0;k<n;k++) {
					if(k>=i and k<=j) {
						tot1+=1;
						sum1+=arr[k];
					} else {
						tot2+=1;
						sum2+=arr[k];
					}
				}
				if(tot1==0) {
					
				} else if(tot2==0){
					
				} else {
					v.push_back((sum1/tot1)+(sum2/tot2));
				}
			}
		}
		sort(v.begin(),v.end());
		cout << fixed << setprecision(9) <<v.back()<<endl;
	}

}