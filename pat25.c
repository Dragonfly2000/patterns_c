#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);

	char ch='A'-1;
	for(char i=n;i>=1;i--){
		for(char j=i;j>=1;j--)
			printf("%c", ch+j);
		printf("\n");
	}
	return 0;
}
