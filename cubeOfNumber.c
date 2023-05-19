#include<stdio.h>
#include<math.h>
int main(){
	printf("-----------PROGRAM TO FIND THE CUBE OF A CERTAIN NUMBER OF TERMS----------");
	int noOfElements;
	printf("\nEnter the number of terms: ");
	scanf("%d",&noOfElements);
	int n=1,cube=1;
	while(n<=noOfElements){
		cube=n*n*n;
		printf("\nThe cube of number %d is %d",n,cube);
		n++;
	}	
}
