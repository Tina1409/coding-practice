#include<stdio.h>
int main(){
	printf("STAR PATTERN (LEFT TRIANGLE)");
	int i,j;
	for(i=0;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
