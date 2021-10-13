#include<bits/stdc++.h>
using namespace  std;
int main() {
   int t;
   cin>>t;
   while(t--) {
      int a,b;
      cin>>a>>b;
      int count=0;

      if((a-b>=1 and a-b<=9) or (b-a>=1 and b-a<=9)) {
         cout<<1<<endl;
      } else {
         if(a>b) {
            int diff=a-b;
            int val=0;
            if(diff>=10) {
               count=diff/10;
               val=diff%10;
               if(val!=0) {
                  count+=1;
               }
            }
         } else {
            int diff=b-a;
            int val=0;
            if(diff>=10) {
               count=diff/10;
               val=diff%10;
               if(val!=0) {
                  count+=1;
               }
            }  
         }
         cout<<count<<endl;
      }

   }
}