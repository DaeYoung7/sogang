#include<Stdio.h>
#include<stdlib.h>
#include<string.h>

void strprt(char**p, int max);

int main()
{
	char **arr;
	char temp[80];
	int max;
	printf("입력할 단어의 개수는?");
	scanf("%d", &max);
	arr=(char**)malloc(max*sizeof(char*)+1);
	for(int i=0; i<max;i++)
	{
		printf("단어를 입력하시오");
		scanf("%s", temp);
		arr[i]=(char*)malloc(strlen(temp)+1);
		strcpy(arr[i], temp);
	}
	arr[max]=0;
	strprt(arr, max);
	free(arr);
	return 0;
}

void strprt(char**p, int max)
{
	for(int i=0; i<max; i++)
	{
		printf("%s\n", p[i]);
	}
	return;
}
