#include<stdio.h>

int main()
{
	int arr[10]={0};
	int a=0,b=0;
	int c=0;
	while( (c=getchar())!='E')
	{
		if('0'<=c&&c<='9')
		{
			arr[c-'0']++;
		}
		else if(c==' ')
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	for(int i=0; i<10; i++)
	{
		printf("%d�� ������ %d�Դϴ�.\n", i, arr[i]);
	}
	printf("������ ������ %d�̰� other�� %d�Դϴ�.", a, b);
}
