#include<stdio.h>

int main()
{
	double a, b, c, sum, ave;
	printf("첫 번째 실수를 입력하시오  : ");
	scanf("%lf", &a);
	printf("두 번째 실수를 입력하시오  : ");
	scanf("%lf", &b);
	printf("세 번째 실수를 입력하시오  : "); 
	scanf("%lf", &c);
	sum=a+b+c;
	ave=sum/(double)3;
	printf("세 실수의 평균은 %f입니다.", (a+b+c)/3.0); 
	return 0; 
}
