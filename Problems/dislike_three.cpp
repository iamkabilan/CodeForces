#include <bits/stdc++.h>

using namespace std;

#define ll long long;


int main() {
   int t;
   cin>>t;
   while(t--) {
      int n;
      cin>>n;
      std::vector<int> v;
      int count=1;
      for(int i=1;i<=n;i++) {
         bool zx=false;
         while(zx!=true){
            if(count%3!=0) {
               string val=to_string(count);
               int len=val.length();
               char pos=val[len-1];
               if(pos!='3') {
                  zx=true;
               }
            }
            count+=1;
         }

      }
      cout<<count-1<<endl;
   }
}