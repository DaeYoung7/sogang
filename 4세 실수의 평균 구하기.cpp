#include<stdio.h>

int main()
{
	double a, b, c, sum, ave;
	printf("ù ��° �Ǽ��� �Է��Ͻÿ�  : ");
	scanf("%lf", &a);
	printf("�� ��° �Ǽ��� �Է��Ͻÿ�  : ");
	scanf("%lf", &b);
	printf("�� ��° �Ǽ��� �Է��Ͻÿ�  : "); 
	scanf("%lf", &c);
	sum=a+b+c;
	ave=sum/(double)3;
	printf("�� �Ǽ��� ����� %f�Դϴ�.", (a+b+c)/3.0); 
	return 0; 
}
