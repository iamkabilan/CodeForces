#include<stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++) {
    	scanf("%d",&arr[i]);		
	}


	int n_police=0;
	int count=0;

	for(int i=0;i<n;i++) {
    	if(arr[i]==-1){
    	    if(n_police>=1){
    	        n_police-=abs(arr[i]);
    	    }
    	    else {
    	        count+=1;
    	    }
    	}

    	if(arr[i]>=1){
    	    n_police+=arr[i];
    	}
    }
	printf("%d \n",count);
}