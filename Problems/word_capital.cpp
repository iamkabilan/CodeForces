#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string str;
	cin>>str;
	if(int(str[0])<97) {
		cout<<str<<endl;
	} else {
		int temp=int(str[0])-32;
		str[0]=char(temp);
		cout<<str<<endl;
	}
}