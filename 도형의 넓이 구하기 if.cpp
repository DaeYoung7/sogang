#include<stdio.h>
#include<math.h>

void areaOfSquare()
{
	double a, b;
			printf("�Ѻ��� ���̸� �Է��ϼ��� ");
			scanf("%lf", &a);
			b=pow(a, 2);
			printf("�Ѻ��� ���̰� %.2f�� ���簢���� ������ %.2f�Դϴ�.\n", a, b);
			printf("���簢���� �ѷ��� %f�Դϴ�.", 4*a);
}

void areaOfTriangle()
{
	double a, b;
			printf("�Ѻ��� ���̸� �Է��ϼ��� ");
			scanf("%lf", &a);
			b=sqrt(3)*pow(a, 2)/4;
			printf("�� ���� ���̰� %.3f�� ���ﰢ���� ������ %.3f�Դϴ�.\n", a, b);
			printf("���ﰢ���� �ѷ��� %f�Դϴ�.", 3*a);
}

void areaOfCircle()
{
	double r, b;
			printf("�������� ���̸� �Է��ϼ��� ");
			scanf("%lf", &r);
			b=pow(r, 2)*M_PI;
			printf("�������� %.2f�� ���� ������ %.3f�Դϴ�.\n", r, b);
			printf("���� �ѷ��� %f�Դϴ�.", 2*r*M_PI);

}

void areaofstar()
{
	double a, b, c, d;
			printf("���� �Ѻ��� ���̸� �Է��ϼ��� ");
			scanf("%lf", &a);
			b=sqrt(3)*pow(a, 2)/4;//���ﰢ��
			c=sqrt(25+10*sqrt(5))*pow(a,2)/4.0;
			d=5*b+c;
			printf("�� ���� ���̰� %.3f�� ���� ������ %.3f�Դϴ�.\n", a, d);
			printf("���� �ѷ��� %f�Դϴ�.", 10*a);
}
int main()
{
	int kd;
	printf("������ ���̿� �ѷ��� ���ϴ� ���α׷��Դϴ�.\n");
	LABEL: 
	printf("���ϴ� ������ ��ȣ�� �Է��ϼ���\t");
	printf("1 : ���ﰢ��, 2: ���簢��, 3 :��, 4 :�� "); 
	scanf("%d", &kd);
	if(kd==1) //���ﰢ�� 
	areaOfTriangle();
	else if(kd==2)//���簢�� 
	areaOfSquare();
	else if(kd==3) //�� 
	areaOfCircle();
	else if(kd==4)//�� 
	areaofstar();
	else
	{
		printf("�߸� �Է��߽��ϴ�. ");
		goto LABEL; 
	}
	return 0;
}
