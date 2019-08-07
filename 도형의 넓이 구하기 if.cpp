#include<stdio.h>
#include<math.h>

void areaOfSquare()
{
	double a, b;
			printf("한변의 길이를 입력하세요 ");
			scanf("%lf", &a);
			b=pow(a, 2);
			printf("한변의 길이가 %.2f인 정사각형의 면적은 %.2f입니다.\n", a, b);
			printf("정사각형의 둘레는 %f입니다.", 4*a);
}

void areaOfTriangle()
{
	double a, b;
			printf("한변의 길이를 입력하세요 ");
			scanf("%lf", &a);
			b=sqrt(3)*pow(a, 2)/4;
			printf("한 변의 길이가 %.3f인 정삼각형의 면적은 %.3f입니다.\n", a, b);
			printf("정삼각형의 둘레는 %f입니다.", 3*a);
}

void areaOfCircle()
{
	double r, b;
			printf("반지름의 길이를 입력하세요 ");
			scanf("%lf", &r);
			b=pow(r, 2)*M_PI;
			printf("반지름이 %.2f인 원의 면적은 %.3f입니다.\n", r, b);
			printf("원의 둘레는 %f입니다.", 2*r*M_PI);

}

void areaofstar()
{
	double a, b, c, d;
			printf("별의 한변의 길이를 입력하세요 ");
			scanf("%lf", &a);
			b=sqrt(3)*pow(a, 2)/4;//정삼각형
			c=sqrt(25+10*sqrt(5))*pow(a,2)/4.0;
			d=5*b+c;
			printf("한 변의 길이가 %.3f인 별의 면적은 %.3f입니다.\n", a, d);
			printf("별의 둘레는 %f입니다.", 10*a);
}
int main()
{
	int kd;
	printf("도형의 넓이와 둘레를 구하는 프로그램입니다.\n");
	LABEL: 
	printf("원하는 도형의 번호를 입력하세요\t");
	printf("1 : 정삼각형, 2: 정사각형, 3 :원, 4 :별 "); 
	scanf("%d", &kd);
	if(kd==1) //정삼각형 
	areaOfTriangle();
	else if(kd==2)//정사각형 
	areaOfSquare();
	else if(kd==3) //원 
	areaOfCircle();
	else if(kd==4)//별 
	areaofstar();
	else
	{
		printf("잘못 입력했습니다. ");
		goto LABEL; 
	}
	return 0;
}
