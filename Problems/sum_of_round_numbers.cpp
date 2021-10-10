#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		int tot=0;
		cin>>n;
		std::vector<string> v;
		int len=to_string(n).length();
		string str=to_string(n);

		for(int i=0;i<len;i++) {
			if(str[i]!='0') {
				tot+=1;
				int val=(len-i)-1;
				string s="";
				for(int j=0;j<val;j++) {
					s+='0';
				}
				v.push_back(str[i]+s);
			}
		}

		cout<<tot<<endl;
		for(int i=0;i<tot;i++) {
			cout<<v[i]<<' ';
		}
	cout<<endl;
	}
}



