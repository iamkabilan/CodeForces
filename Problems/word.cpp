#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	int upper=0;
	int lower=0;
	char temp;
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); i++)
	{
		temp=s[i];
		
		if((int)temp<=90) {
			upper+=1;
			
		} else {
			lower+=1;
		}
	}

	if(upper>lower) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout<<s<<endl;
	}else if(lower>upper) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout<<s<<endl;
	}else {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout<<s<<endl;
	} 
}