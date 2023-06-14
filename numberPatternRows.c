#include<stdio.h>
int main(){
	printf("NUMBER PATTERN (LEFT TRIANGLE)");
	int i,j;
	for(i=0;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
