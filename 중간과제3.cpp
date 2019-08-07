#include<Stdio.h>
#define rows 4
#define cols 3

int sumofRows(int sum[], int arr[][cols]);
int sumofCols(int sum[], int arr[][cols]);

int main()
{
	int tot;
	int arr[rows][cols];
	int sum1[rows]={0};
	int sum2[cols]={0};
	printf("Enter the array...\n");
	for(int i=0; i<rows; i++)
	{
		printf("%d: ", i+1);
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	}
	sumofRows(sum1, arr);
	sumofCols(sum2, arr);
	for(int j=0;j<cols;j++)
	tot+=sum2[j];
	printf("\n\n");
	for(int i=0; i<rows; i++)
	{
		printf(" %2d %2d %2d | %-2d\n", arr[i][0], arr[i][1], arr[i][2], sum1[i]);
	}
	printf("---------------\n");
	printf(" %2d %2d %2d | %2d", sum2[0], sum2[1], sum2[2], tot);
}

int sumofRows(int sum[], int arr[][cols])
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
			sum[i]+=arr[i][j];
	}
}

int sumofCols(int sum[], int arr[][cols])
{
	for(int j=0; j<cols; j++)
	{
		for(int i=0; i<rows; i++)
			sum[j]+=arr[i][j];
	}
}

