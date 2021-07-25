#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int win(int x, int y) {
	if(x>y) {
		return x;
	}

	return y;
}

int lose(int x,int y) {
	if(x<y) {
		return x;
	}

	return y;
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++) {
		int a,b,c,d,win1,win2,lose1,lose2,lose3;
		cin>>a>>b>>c>>d;
		win1=win(a,b);
		win2=win(c,d);

		lose1=lose(a,b);
		lose2=lose(c,d);
		lose3=lose(win1,win2);

		if(lose3<lose1 or lose3<lose2) {
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
} 