#include<stdio.h>

int main()
{
	int a, b, c, sum;
	double ave;
	printf("ù ��° ������ �Է��Ͻÿ�  : ");
	scanf("%d", &a);
	printf("�� ��° ������ �Է��Ͻÿ�  : ");
	scanf("%d", &b);
	printf("�� ��° ������ �Է��Ͻÿ�  : "); 
	scanf("%d", &c);
	sum=a+b+c;
	ave=sum/3.0;
	printf("�� ������ ����� %f�Դϴ�.", ave); 
	return 0; 
}
