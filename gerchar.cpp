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
		printf("%d의 개수는 %d입니다.\n", i, arr[i]);
	}
	printf("공백의 개수는 %d이고 other은 %d입니다.", a, b);
}
