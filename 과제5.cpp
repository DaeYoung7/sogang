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
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c); 
	int arr[4];
	arr[0]=a, arr[1]=b, arr[2]=c, arr[3]=0;
	printf("����ϰ���� ������ ������?2 �Ǵ� 3  ");
	scanf("%d", &n);
	if(n==2)
	{
		int d,e;
		printf("����� ������ ������?  ");
		scanf("%d %d", &d, &e); 
		d--, e--;
		s=sum(arr[d], arr[e], arr[3]);
		l=average(s, n);
		printf("���� %d, ����� %.2f�Դϴ�.", s, l);
		return 0;
	}
	else if(n==3)
	{
		s=sum(a, b, c);
		l=average(s, n);
		printf("���� %d, ����� %.2f�Դϴ�", s, l);
		return 0;
	}
	else
	{
		printf("�߸��Է��߽��ϴ�. "); 
	}
	return 0;
}
