#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
	int t;
	cin>>t;

	for(int i=0;i<t;i++) {
		int num_ath;
		cin>>num_ath;
		
		int arr[num_ath][4];
		for(int j=0;j<num_ath;j++) {
			for(int k=0;k<4;k++) {
				cin>>arr[j][k];
			}
		}

		if(num_ath==1) {
			cout<<1<<endl;
		}
		if(num_ath>1) {
			
			std::map<int, int> m;
			int val[num_ath];
			for(int s=0;s<num_ath;s++) {
				int count=0;
				for(int j=0;j<num_ath;j++) {
					int temp=0;
					for(int k=0;k<4;k++) {
						if(j!=num_ath-1) {
							if(arr[s][k]<arr[j+1][k]) {
								temp+=1;
								cout<<'-'<<endl;
							}
						} else {
							if(arr[s][k]<arr[0][k]) {
								temp+=1;
							}
						}
					}
					count+=temp;
				}
				m.insert(pair<int, int>(s+1, count));		
			}

		}


	}
}