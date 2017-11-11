#include<stdio.h>

int main()
{
	int i,a=5;
	i=(++a + ++a + ++a);
	printf("%d %d",i,a);
	return 0;
}
