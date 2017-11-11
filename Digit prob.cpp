#include<stdio.h>

int main()
{
	char x[100000];
	int k,i=0,p;
	scanf("%s %d",&x,&k);
	for(p=0;p<k;p++)
	{
	if(x[i]!='9')
	{
		x[i]='9';
		i++;
	}
	else
	{
		i++;
		k++;
	}
}
	printf("%s",x);
	return 0;
}

