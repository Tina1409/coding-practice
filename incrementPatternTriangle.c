#include<stdio.h>
int main(){
	printf("NUMBER PATTERN(LEFT TRIANGLE)\n");
	int i,j,count=1;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf(" %d ",count);
			count++;
		}
		printf("\n");
	}
	
}
