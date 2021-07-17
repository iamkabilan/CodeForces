#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,entry[1500],exit[1500];
	int max=-10000;
	cin>>n;

	for(int i=0;i<n;i++) {
		int temp=0;

		scanf("%d %d",&exit[i],&entry[i]);

		if(i!=0) {
			temp=entry[i-1]-exit[i];
			entry[i]=temp+entry[i];

			if(entry[i]>max) {
				max=abs(entry[i]);
			}
			
		}
	}
	cout<<max<<endl;
}