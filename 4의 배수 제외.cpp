#include<stdio.h>

int main()
{
	int sum=0;
	for(int i=1; i<201; i++)
	{
		if(i%4==0)
		{
			continue;
		}
		else
		{
			sum+=i;
		}
	}
	printf("%d", sum);
}
