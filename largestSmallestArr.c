//Find the Largest and Smallest Element in Array 

#include<stdio.h>

void main(){
	int n,i,Largest;
	int a[]={5,7,9,16,8};
//	printf("Enter the size of Array");
//	scanf("%d",&n);
	Largest = a[0];
	
	for(i=1;i<5;i++){
		
		if(a[i]>Largest){
			Largest=a[i];
		}
		
	}
	printf("%d is the largest ",Largest);
}
