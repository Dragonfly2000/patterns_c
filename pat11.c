#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(char i=1;i<=n;i++){
		for(char j=1;j<=n-i;j++)
			printf(" ");
		for(char j=i; j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
	return 0;
}
