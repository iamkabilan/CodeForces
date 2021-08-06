#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string str;
	cin>>str;

	int anton=0;
	int danik=0;
	for(auto i:str) {
		if(i=='A') {
			anton+=1;
		} else {
			danik+=1;
		}
	}
	if(anton>danik) {
		cout<<"Anton"<<endl;
	} else if(danik>anton){
		cout<<"Danik"<<endl;
	} else {
		cout<<"Friendship"<<endl;
	}
}