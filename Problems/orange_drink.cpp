#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	float total=0;
	cin>>n;

	for(int i=0;i<n;i++){
		float temp;
		cin>>temp;
		if(temp==0) {

		} else {
			total=total+(temp/100);			
		}

	}
	total=total/n;
	total=total*100;
	cout<<total<<endl;
}