#include<stdio.h>
int main(){
	printf("--------MULTIPLICATION TABLE--------");
	int number;
	printf("\nEnter the number for which you want mupliplication table to be printed: ");
	scanf("%d",&number);
	int n=1;
	while(n<=10){
		printf("\n%d X %d = %d ",number,n,n*number);
		n++;
		
	}
}
