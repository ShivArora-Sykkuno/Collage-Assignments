#include<stdio.h>
void main(){
    int a;
	printf("SHIV ARORA\n");
	printf("Enter a numbers  \n");
	scanf("%d", &a);
	switch(a > 0){
		case 1:
		printf("%d is positive\n", a);
		break;
		case 0:
		switch(a < 0){
			case 1:
			printf("%d is negative\n", a);
			break;
			case 0:
			printf("%d is zero\n", a);
			break;
		}
	}
}
