#include<stdio.h>

int main()
{
	int sum=0;
	int cnt;
	int i=1;
	printf("알고싶은 n번째 7의 배수는?  ");
	scanf("%d", &cnt);
	while(i<201)
	{
		if(i%7==0)
		{
			sum+=i;
			if(cnt==i/7)
			{
				printf("%d번째 7의 배수는 %d입니다.\n", cnt, i);
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
