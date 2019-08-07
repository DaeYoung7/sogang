#include<Stdio.h>

int sum(int a, int b, int c)
{
	return a+b+c;
}
double average(int s, int c)
{
	return s/(float)c;
}
int main()
{
	int a, b, c, n, s;
	double l;
	printf("세 정수를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c); 
	int arr[4];
	arr[0]=a, arr[1]=b, arr[2]=c, arr[3]=0;
	printf("사용하고싶은 정수의 갯수는?2 또는 3  ");
	scanf("%d", &n);
	if(n==2)
	{
		int d,e;
		printf("사용할 숫자의 순서는?  ");
		scanf("%d %d", &d, &e); 
		d--, e--;
		s=sum(arr[d], arr[e], arr[3]);
		l=average(s, n);
		printf("합은 %d, 평균은 %.2f입니다.", s, l);
		return 0;
	}
	else if(n==3)
	{
		s=sum(a, b, c);
		l=average(s, n);
		printf("합은 %d, 평균은 %.2f입니다", s, l);
		return 0;
	}
	else
	{
		printf("잘못입력했습니다. "); 
	}
	return 0;
}
