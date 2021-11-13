#include <bits/stdc++.h>

using namespace std;

#define ll long long;


int main() {
   int t;
   cin>>t;

   while(t--) {
      string alpha,str;
      cin>>alpha;
      cin>>str;
      int size=str.length();
      int tot=0;

      for(int i=0;i<size-1;i++) {
         size_t found = alpha.find(str[i]);
         int temp1=found+1;
         size_t found2 = alpha.find(str[i+1]);
         int temp2=found2+1;
         tot+=abs(temp2-temp1);
      }
      cout<<tot<<endl;
      }
}
