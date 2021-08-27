#include<stdio.h>
#include<string.h>
void get_next(char T[],int next[])
{
	int i=1,j=0;
	next[1]=0;
	while(i<int(T[0]))
	{
		if(j==0||T[i]==T[j])
		{
			i++;
			j++;
			next[i]=j;
		}
		else
		j=next[j];
	}
}
void get_nextval(char T[],int next[],int nextval[],int  n)
{
	int i=0;
	nextval[0]=-1;
	while(i<n)
	{
		if(T[i]=T[next[i]])
			nextval[i]=nextval[next[i]];
		else
			nextval[i]=next[i];
		i++;
	}
}
main()
{
	char s[]="8abaabcac";
	int next[strlen(s)];
	int nextval[strlen(s)];
	int k;
	next[0]=9;
	printf("substr");
	for(k=1;k<next[0];k++)
		printf("%5c",s[k]);
	printf("\n");
	get_next(s,next);
	printf("next  ");
	for(k=1;k<next[0];k++)
		printf("%5d",next[k]);
	printf("\n");
	get_nextval(s,next,nextval,next[0]);
	printf("nextval");
	for (k=1;k<next[0];k++)
		printf("%5d",nextval[k]);
	
}
