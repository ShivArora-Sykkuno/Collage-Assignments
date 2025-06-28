#include<stdio.h>
void main(){
    int n;
	printf("SHIV ARORA\n");
	printf("Enter a number for Month  \n");
	scanf("%d", &n);
	switch(n){
		case 1:
		printf("There are 31 days in Jan\n");
		break;
		case 2:
		printf("There are 28/29 days in Feb\n");
		break;
		case 3:
		printf("There are 31 days in Mar\n");
		break;
		case 4:
		printf("There are 30 days in Apr\n");
		break;
		case 5:
		printf("There are 31 days in May\n");
		break;
		case 6:
		printf("There are 30 days in Jun\n");
		break;
		case 7:
		printf("There are 31 days in Jul\n");
		break;
		case 8:
		printf("There are 31 days in Aug\n");
		break;
		case 9:
		printf("There are 30 days in Sep\n");
		break;
		case 10:
		printf("There are 31 days in Oct\n");
		break;
		case 11:
		printf("There are 30 days in Nov\n");
		break;
		case 12:
		printf("There are 31 days in Dec\n");
		break;
	}
}
