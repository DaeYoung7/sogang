#include<stdio.h>

int main()
{
	int sum=0;
	int cnt;
	printf("�˰���� n��° 7�� �����?  ");
	scanf("%d", &cnt);
	for(int i=1; i<201; i++)
	{
		if(i%7==0)
		{
			sum+=i;
			if(cnt==i/7)
			{
				printf("%d��° 7�� ����� %d�Դϴ�.\n", cnt, i);
			}
		}
		else
		{
			continue;
		}
	}
	printf("%d", sum);
}
