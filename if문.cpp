#include<stdio.h>

int main()
{
	int sum=0;
	int cnt;
	printf("알고싶은 n번째 7의 배수는?  ");
	scanf("%d", &cnt);
	for(int i=1; i<201; i++)
	{
		if(i%7==0)
		{
			sum+=i;
			if(cnt==i/7)
			{
				printf("%d번째 7의 배수는 %d입니다.\n", cnt, i);
			}
		}
		else
		{
			continue;
		}
	}
	printf("%d", sum);
}
