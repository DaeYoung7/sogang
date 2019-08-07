#include<Stdio.h>
#include<stdlib.h>
#define SIZE 5
void multiply(int *,int);

int main()
{
	int *p;
	p=(int*)realloc(p,sizeof(int)*SIZE);
	int *pwalk;
	int *plast;
	plast=p+SIZE-1;
	for(pwalk=p;pwalk<=plast;pwalk++)
	{
		printf("정수를 입력하시오");
		scanf("%d", pwalk);
	}
	multiply(p,SIZE*sizeof(int));
	for(pwalk=p;pwalk<=plast;pwalk++)
	{
		printf("%3d", *pwalk);
	}
	free(p);
	return 0;
}

void multiply(int *p, int size)
{
	int *pwalk;
	int *plast;
	plast=p+size-1;
	for(pwalk=p;pwalk<=plast;pwalk++)
	{
		*pwalk=*pwalk*2;
	}
}
