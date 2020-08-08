#include <stdio.h>
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	for(char i=n;i>=1;i--){
		for(char j=1; j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

