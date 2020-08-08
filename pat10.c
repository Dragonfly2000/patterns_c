#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);

	for(char i=n; i>=1; i--){
		for(char j=1;j<=n-i;j++)
			printf(" ");
		for(char j=1; j<=i; j++)
			printf("%d", j);
		printf("\n");
	}
	return 0;
}
