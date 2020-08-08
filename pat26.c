#include <stdio.h>
int main(){
	int n;
	char ch='A'-1;

	printf("Enter Number: ");
	scanf("%d", &n);

	for(char i=n; i>=1; i--){
		for(char j=1; j<i;j++)
			printf(" ");
		for(char j=n; j>=i;j--)
			printf("%c", ch+j);
		printf("\n");
	}
	for(char i='A'; i<='y'; i++)
		printf("%c",i);
	return 0;	
}
