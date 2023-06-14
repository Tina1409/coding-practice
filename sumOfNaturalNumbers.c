#include<stdio.h>
int main(){
	printf("-----------PROGRAM TO PRINT SUM OF NATURAL NUMBERS-----------");
	int n=1,sum=0;
	while(n<=10){
		printf("\nThe value is: %d",n);
		sum=sum+n;
		n++;
	}
	printf("\n\nThe sum is:%d ",sum);
}
