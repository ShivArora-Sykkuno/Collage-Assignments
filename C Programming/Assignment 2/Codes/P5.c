#include<stdio.h>
void main(){
    int a;
	printf("SHIV ARORA\n");
	printf("Enter a numbers  \n");
	scanf("%d", &a);
	switch(a%2 == 0){
		case 0:
		printf("%d is odd\n", a);
		break;
		case 1:
		printf("%d is even\n", a);
		break;
	}
}
