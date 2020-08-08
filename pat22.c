#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);

	for(char i=1; i<=5; i++){
		for(char j=1; j<=i; j++)
			if(j%2!=0 && i%2==0) printf("0");
			else printf("1");
		printf("\n");
	}
	return 0;
}
