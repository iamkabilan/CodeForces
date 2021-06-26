#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int t,n;
	int i,j,x,y=0;
	

	scanf("%d",&t);
	for(i=0;i<t;i++) {
		scanf("%d",&n);
		int arr[n];
		for(j=0;j<n;j++) {
			scanf("%d",&arr[j]);

		}

		int count=0;
		for(x=0;x<n;x++) {
			for(y=0;y<n;y++) {
				if(x!=y) {
					int add=x+1+y+1;
					int pro=arr[x]*arr[y];
					if(add == pro) {
						count+=1;
					}
				}
			}
		}
		count=count/2;
		printf("%d \n",count);

	}
}