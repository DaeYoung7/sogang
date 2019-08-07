#include<Stdio.h>

int main()
{
	int res, cnt=0;
	double height;
	double avehei=0;
	int aveage=0;
	char name[20];
	int age;
	FILE *ifp=fopen("a.txt", "r");
	if(ifp==NULL)
	{
		printf("¿ÀÇÂ¿¡·¯»ý±è");
		return 1; 
	}
	FILE *ofp=fopen("b.txt", "w");
	if(ofp==NULL)
	{
		printf("¿ÀÇÂ¿¡·¯»ý±è");
		return 1; 
	}
	while(1)
	{
		res=fscanf(ifp, "%s%d%lf", name, &age, &height);
		if(res==EOF) break;
		avehei=avehei+height;
		aveage=aveage+age;
		fprintf(ofp, "%.11f %d %s\n", height, age, name);
		cnt++;
	}
	fprintf(ofp, "Æò±Õ ³ªÀÌ: %d, Æò±Õ Å°: %.11f", aveage/cnt, avehei/cnt);
	fclose(ifp);
	fclose(ofp);
}
