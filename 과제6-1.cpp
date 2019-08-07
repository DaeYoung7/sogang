#include <stdio.h>

int sum(int a, int b, int c)
{
	return a+b+c;
}
double average(int s, int c)
{
	return (double)s/c;
}
int max(int a, int b, int c)
{
	int maxi;
	maxi=a;
	if(maxi<b)
	{
		maxi=b;
	}
	if(maxi<c)
	{
		maxi=c;
	}
	return maxi;
}
int min(int a, int b, int c)
{
	int mini;
	mini=a;
	if(mini>b)
	{
		mini=b;
	}
	if(mini>c)
	{
		mini=c;
	}
	return mini;
}

int main()
{
	int a, b, c, add1, add2, maxi, mini;
	double avg1, avg2;
	printf("세 정수를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c); 
	add1=sum(a, b, c);
	avg1=average(add1, 3);
	printf("세정수의 합은 %d이고 그 평균은 %.2f입니다.\n\n ", add1, avg1);
	maxi=max(a, b, c);
	mini=min(a, b, c);
	printf("최댓값은 %d이고 최솟값은 %d입니다. \n\n", maxi, mini);
	add2=sum(maxi, mini, 0);
	avg2=average(add2, 2);
	printf("최댓값과 최솟값의 합은 %d이고 그 평균은 %.2f입니다.", add2, avg2);
}
