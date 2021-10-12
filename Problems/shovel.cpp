#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int count=1;
    int tot=k;
    string val=to_string(k);
    int len=val.length();
    char i=val[len-1];
    
    int j=i-48;
    
    while(r!=j) {
    	if(j==0) {
    		break;
    	}
        count+=1;
        tot=count*k;
        val=to_string(tot);
        len=val.length();
        i=val[len-1];
        j=i-48;
    }
    cout<<count<<endl;
}


