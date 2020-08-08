#include <stdio.h>
int main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);

	for(char i=0; i<n; i++){
		for(char j=n-1; j>i; j--)
			printf(" ");
		for(char j=i; j>=0; j--)
			printf("%d",j);
		for(char j=1; j<=i; j++)
			printf("%d",j);
		printf("\n");
	}
	return 0;
}
