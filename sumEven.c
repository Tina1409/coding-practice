#include<stdio.h>
int main(){
	printf("SUM OF EVEN NATURAL NUMBERS");
	int n;
	printf("\nEnter the number of terms: ");
	scanf("%d",&n);
	int count=0,sumEven=0;
	int i=1;
	while(1){
		if(i%2==0){
			printf("\nNumber is: %d ",i);
			sumEven=sumEven+i;
			count=count+1;
			if(count>=n){
				break;
			}
		}
		i++;
	}
	printf("\nThe sum is: %d",sumEven);
}
