#include<stdio.h>
int main(){
	printf("Multiplication Table");
	int n;
	printf("\nEnter the number upto which tables are to be printed: ");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j =1;j<=10;j++){
			printf("%d X %d = %d,",i,j,i*j);
		}
		printf("\n");
	}
}
