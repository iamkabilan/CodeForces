#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
	int arr[5][5];
	int i,j=0;
	int count=0;

	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			cin>>arr[i][j];
		}
	}

	int mid_i,mid_j=3;
	int temp_i,temp_j;

	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			if(arr[i][j]==1) {
				temp_i=i;
				temp_j=j;
			}
		}
	}

	temp_i+=1;
	temp_j+=1;
	
	while(temp_i!=3 or temp_j!=3) {
		if(temp_i>3) {
			temp_i-=1;
		}
		else if(temp_i<3) {
			temp_i+=1;
		}
		else if(temp_j>3) {
			temp_j-=1;
		}
		else if(temp_j<3) {
			temp_j+=1;
		}
		else {

		}
		count=count+1;
		
	}
	
	
	
	cout<<count<<endl;
	
}