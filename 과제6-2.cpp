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
	if(a<b) maxi=c>b?c:b;
	else maxi=a>c?a:c;
	return maxi;
}
int min(int a, int b, int c)
{
	int mini;
	if(a<b) mini=c>a?a:c;
	else mini=b>c?c:b;
	return mini;
}

int main()
{
	int a, b, c, add1, add2, maxi, mini;
	double avg1, avg2;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c); 
	add1=sum(a, b, c);
	avg1=average(add1, 3);
	printf("�������� ���� %d�̰� �� ����� %.2f�Դϴ�.\n\n ", add1, avg1);
	maxi=max(a, b, c);
	mini=min(a, b, c);
	printf("�ִ��� %d�̰� �ּڰ��� %d�Դϴ�. \n\n", maxi, mini);
	add2=sum(maxi, mini, 0);
	avg2=average(add2, 2);
	printf("�ִ񰪰� �ּڰ��� ���� %d�̰� �� ����� %.2f�Դϴ�.", add2, avg2);
}
