#include<stdio.h>
void main(){
    int a, b;
	printf("SHIV ARORA\n");
	printf("Enter two numbers  \n");
	scanf("%d%d", &a, &b);
	switch(a > b){
		case 0:
		printf("%d is the maximum number\n", b);
		break;
		case 1:
		printf("%d is the maximum number\n", a);
		break;
	}
}
