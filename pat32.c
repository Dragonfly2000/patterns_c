#include <stdio.h>
int main(){
	int n;
	printf("Enter number:");
	scanf("%d", &n);

	for(char i=1; i<=n; i++){
		for(char j=1; j<=i; j++)
			if(j==1||j==i||i==n) printf("*");
			else printf(" ");
		printf("\n");
	}
	return 0;
}
