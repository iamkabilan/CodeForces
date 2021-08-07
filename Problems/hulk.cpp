#include <bits/stdc++.h>
using namespace std;

int main() {
	string str1="I hate ";
	string str2="I hate that I love ";
	string ans="";
	int n;
	cin>>n;
	ans=str2;
	ans=ans+"that ";
	if(n==1) {
		cout<<str1<<"it"<<endl;
	} else if(n==2) {
		cout<<str2<<"it"<<endl;
	} else {
		for(int i=3;i<=n;i++) {
			if(i%2!=0) {
				
			} else {
				ans=ans+str2;
			}

			if(i%2==0 and i!=n) {
				ans+="that ";
			}
		}
		if(n%2!=0) {
			cout<<ans<<"I hate it"<<endl;
		} else {
			cout<<ans<<"it"<<endl;
		}
		
	}
	
}