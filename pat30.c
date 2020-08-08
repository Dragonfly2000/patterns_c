#include <stdio.h>
int main(){
	int n;
	printf("Enter Num:");
	scanf("%d",&n);

	for(char i=1;i<=n;i++){
		for(char j=1; j<=i; j++)
			printf("*");
		for(char j=1; j<2*(n-i);j++)
			printf(" ");
		for(char j=1; j<=i; j++)
			if(i==n && j==n) continue;
			else printf("*");
		printf("\n");
	}
	return 0;
}
