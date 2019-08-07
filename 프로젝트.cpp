#include<stdio.h>
#include<string.h>

typedef struct{
		char name[10];
		int id;
		int age;
		char home[40];
		char semester[10];
		char school[5];
		char army[10];
	}friends;
	
void maxage(friends []);

void maxid(friends []);

void inschool(friends [], FILE*f);

void beentoarmy(friends [], FILE*f);

int main()
{
	FILE*ifp=fopen("입력파일.txt", "r");
	FILE*ofp=fopen("출력파일2.txt", "w");
	friends str[4];
	fscanf(ifp, "%s %d %d %s %s %s %s", str[0].name, &str[0].id, &str[0].age, str[0].home, str[0].semester, str[0].school, str[0].army);
	fscanf(ifp, "%s %d %d %s %s %s %s", str[1].name, &str[1].id, &str[1].age, str[1].home, str[1].semester, str[1].school, str[1].army);
	fscanf(ifp, "%s %d %d %s %s %s %s", str[2].name, &str[2].id, &str[2].age, str[2].home, str[2].semester, str[2].school, str[2].army);
	fscanf(ifp, "%s %d %d %s %s %s %s", str[3].name, &str[3].id, &str[3].age, str[3].home, str[3].semester, str[3].school, str[3].army);
	fprintf(ofp, "----------------------------------------------------------------------------------------------------------------\n");
	fprintf(ofp, "|  이름  |     학번     | 나이 |                         주소                         | 학기 | 재학/휴학 |   병역  |\n");
	fprintf(ofp, "----------------------------------------------------------------------------------------------------------------\n");
	fprintf(ofp, "| %s | %d |  %d  |%-46s| %s |    %s    |  %s   |\n", str[0].name, str[0].id, str[0].age, str[0].home, str[0].semester, str[0].school, str[0].army);
	fprintf(ofp, "----------------------------------------------------------------------------------------------------------------\n");
	fprintf(ofp, "| %s | %d |  %d  |%-46s| %s |    %s    |  %s   |\n", str[1].name, str[1].id, str[1].age, str[1].home, str[1].semester, str[1].school, str[1].army);
	fprintf(ofp, "----------------------------------------------------------------------------------------------------------------\n");
	fprintf(ofp, "| %s | %d |  %d  |%-46s| %s |    %s    |  %s   |\n", str[2].name, str[2].id, str[2].age, str[2].home, str[2].semester, str[2].school, str[2].army);
	fprintf(ofp, "----------------------------------------------------------------------------------------------------------------\n");
	fprintf(ofp, "| %s | %d |  %d  |%-46s| %s |    %s    |  %s   |\n", str[3].name, str[3].id, str[3].age, str[3].home, str[3].semester, str[3].school, str[3].army);
	fprintf(ofp, "----------------------------------------------------------------------------------------------------------------\n");
	maxage(str);
	fprintf(ofp, "나이 많은 순으로 정렬 :\n");
	for(int i=0;i<4;i++)
		fprintf(ofp, "%s\t", str[i].name);
	maxid(str);
	fprintf(ofp, "\n\n학번이 낮은 순으로 정렬(이름과 주소) :\n");
	for(int i=0;i<4;i++)
		fprintf(ofp, "%s(%s)\n", str[i].name, str[i].home);
	fprintf(ofp, "\n재학중인 학생 :\n");
	inschool(str, ofp);
	fprintf(ofp, "\n\n군필인 학생 :\n");
	beentoarmy(str, ofp);
}

void maxage(friends str[])
{
	friends temp[4];
	for(int i=1;i<4;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(str[j].age<str[i].age)
			{
				for(int k=0; k<(i-j);k++)
					temp[j+k]=str[j+k];
				str[j]=str[i];
				for(int k=0;k<(i-j);k++)
					str[j+k+1]=temp[j+k];
			}
		}
	}
}

void maxid(friends str[])
{
	friends temp[4];
	for(int i=1;i<4;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(str[j].id<str[i].id)
			{
				for(int k=0; k<(i-j);k++)
					temp[j+k]=str[j+k];
				str[j]=str[i];
				for(int k=0;k<(i-j);k++)
					str[j+k+1]=temp[j+k];
			}
		}
	}
}

void inschool(friends str[], FILE*f)
{
	char temp[5]="재학";
	for(int i=0;i<4;i++)
	{
		if(strcmp(str[i].school, temp)==0)
			fprintf(f,"%s ", str[i].name);
	}
}

void beentoarmy(friends str[], FILE*f)
{
	char temp[5]="군필";
	for(int i=0;i<4;i++)
	{
		if(strcmp(str[i].army, temp)==0)
			fprintf(f,"%s ", str[i].name);
	}
}

