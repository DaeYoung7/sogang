#include<stdio.h>

int main()
{
	int a, b, c, sum;
	double ave;
	printf("첫 번째 정수를 입력하시오  : ");
	scanf("%d", &a);
	printf("두 번째 정수를 입력하시오  : ");
	scanf("%d", &b);
	printf("세 번째 정수를 입력하시오  : "); 
	scanf("%d", &c);
	sum=a+b+c;
	ave=sum/3.0;
	printf("세 정수의 평균은 %f입니다.", ave); 
	return 0; 
}
