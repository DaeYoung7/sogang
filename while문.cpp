#include<stdio.h>

int main()
{
	int sum=0;
	int cnt;
	int i=1;
	printf("�˰���� n��° 7�� �����?  ");
	scanf("%d", &cnt);
	while(i<201)
	{
		if(i%7==0)
		{
			sum+=i;
			if(cnt==i/7)
			{
				printf("%d��° 7�� ����� %d�Դϴ�.\n", cnt, i);
			}
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	printf("%d", sum);
}
