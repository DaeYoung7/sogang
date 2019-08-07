#include<stdio.h>
#define rows 5
#define cols 3

void scan(int arr[][cols]);

void sumave(int tot[], double ave[], int arr[][cols]);

int main()
{
	int tot[rows]={0};
	double ave[rows]={0};
	printf("Enter the score...\n");
	int arr[rows][cols];
	scan(arr);
	sumave(tot, ave, arr);
	printf("\nNO\tKOR\tENG\tMATH\t TOT\tAVE\n");
	for(int i=0; i<rows; i++)
	{
		printf("%d: ", i+1);
		for(int j=0; j<cols; j++)
		{
			printf(" \t%2d", arr[i][j]);
		}
		printf("\t%4d \t%4.2f\n", tot[i], ave[i]);
	}
	return 0;
}

void scan(int arr[][cols])
{
	for(int j=0;j<rows;j++)
	{
		printf("%d: ", j+1);
		scanf("%d %d %d", &arr[j][0], &arr[j][1], &arr[j][2]);
	}
	return;
}

void sumave(int tot[], double ave[], int arr[][cols])
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			tot[i]+=arr[i][j];
		}
		ave[i]=(double)tot[i]/3;
	}
	return;
}
