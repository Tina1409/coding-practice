#include<stdio.h>
int main(){
	printf("FACTORIAL OF A NUMBER");
	int n;
	printf("\nEnter the number of terms: ");
	scanf("%d",&n);
	int i,factorial=1;
	for(i=1;i<=n;i++){
		factorial=factorial*i;
	}
	printf("\nThe factorial is: %d",factorial);
}
