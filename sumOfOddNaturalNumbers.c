#include<stdio.h>
int main(){
	printf("Odd natural numbers along with its sum");
	int num,sumOdd=0;
	printf("\nEnter the number of terms: ");
	scanf("%d",&num);
	int n=0;
	int count=0;
	while(1){	
		if(n%2!=0){
			printf("\nNumber is: %d",n);
			sumOdd=sumOdd+n;
			count=count+1;
			if(count>=num){
				break;
			}		
		}
		n++;
	}
	printf("\nThe odd sum is: %d",sumOdd);
	return 0;
}
