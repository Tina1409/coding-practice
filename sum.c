#include<stdio.h>
int main(){
	printf("-----------PROGRAM TO PRINT SUM OF NATURAL NUMBERS-----------");
	int n=1,noOfElements;
	printf("\nEnter the number of natural numbers to be printed: ");
	scanf("%d",&noOfElements);
	int sum=0;
	while(n<=noOfElements){
		printf("\nThe value is: %d",n);
		sum=sum+n;
		n++;
	}
	printf("\n\nThe sum is:%d ",sum);
}
