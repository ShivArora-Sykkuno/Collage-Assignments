#include<stdio.h>
void main(){
    char ch;
	printf("SHIV ARORA\n");
	printf("Enter an alphabet  \n");
	scanf("%c", &ch);
	switch(ch){
		case 'a':
		printf("The alphabet is a vowel\n");
		break;
		case 'e':
		printf("The alphabet is a vowel\n");
		break;
		case 'i':
		printf("The alphabet is a vowel\n");
		break;
		case 'o':
		printf("The alphabet is a vowel\n");
		break;
		case 'u':
		printf("The alphabet is a vowel\n");
		break;
		default:
		printf("The alphabet is a consonant\n");
		break;
	}
}
