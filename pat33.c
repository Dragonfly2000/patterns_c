#include <stdio.h>
int main(){
	char ch='A', num=1;
	for(char i=1; i<=5; i++){
		for(char j=1; j<=i; j++)
			if(i%2==0){
				printf("%d", num);
				num++;
			}
			else{
				printf("%c", ch);
				ch++;
			}
		printf("\n");
	}
	return 0;
}
