
#include <stdio.h>

int main(void){
	int num;
	printf("Hello Git! \n");
	printf("Hello Hotfix! \n");
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	if(num%2==0)
		printf("짝수입니다.");
	else
		printf("홀수입니다.");
	return 0;}
