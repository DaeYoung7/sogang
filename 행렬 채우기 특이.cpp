#include<stdio.h>

int main()
{
	int row, col;
	char c;
	printf("행렬의 사이즈를 입력하시오 : ");
	scanf("%d x %d", &row, &col);
	printf("영문자를 입력하시오 : ");
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
