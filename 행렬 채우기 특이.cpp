#include<stdio.h>

int main()
{
	int row, col;
	char c;
	printf("����� ����� �Է��Ͻÿ� : ");
	scanf("%d x %d", &row, &col);
	printf("�����ڸ� �Է��Ͻÿ� : ");
	scanf(" %c", &c);
	char arr[row][col];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(col%2==0)
			{
				if((((col/2+i/2)>=j)&&(j>=(col/2-i/2)))||(((col/2-1+i/2)>=j)&&(j>=(col/2-1-i/2))))
				{
					arr[i][j]=c;
				}
				else
				{
					if(c>='a') 
					arr[i][j]=c-'a'+'A';
					else
					arr[i][j]=c-'A'+'a';
				}
			}
			else
			{
				if(((col/2+i/2)>=j)&&(j>=(col/2-i/2)))
				{
					arr[i][j]=c;
				}
				else
				{
					if(c>='a')
					arr[i][j]=c-'a'+'A';
					else
					arr[i][j]=c-'A'+'a';
				}
			}
			printf("%2c", arr[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
