#include <stdio.h>
int main(){
	int n;
	char ch='a'-1;

	printf("Enter Number: ");
	scanf("%d", &n);

	for(char i=1;i<=n; i++){
		for(char j=1; j<=n-i;j++)
			printf(" ");
		for(char j=1;j<=i;j++)
			printf("%c",ch+j);
		printf("\n");
	}
	return 0;
}
