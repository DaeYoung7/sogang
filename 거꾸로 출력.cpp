#include<Stdio.h>

int main()
{
	int i=0;
	int arr[50]={0};
	printf("������ �ڸ��� Z�� ���ڸ� �Է��Ͻÿ� : ");
	while(1)
	{
		char c=getchar();
		if(c=='Z') 
		break;
		int k=c-'0'; 
		arr[i]=k;
		i++;
	}
	int *p=arr;
	for(int j=1; j<=i; j++)
	{
		printf("%2d", p[i-j]);
	}
	return 0;
}
