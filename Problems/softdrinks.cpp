#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int litre=k*l;
	int toast1=litre/nl;
	int lime=c*d;
	int toast2=lime;
	int salt=p/np;
	int low=min(toast2,toast1);
	low=min(low,salt);
	cout<<low/n<<endl;
}