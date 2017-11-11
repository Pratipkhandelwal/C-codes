#include <stdio.h>

int main()
{
    int n,x,i,k=0,y;
    scanf("%d %d",&n,&x);
    int p[n+1];
    y=x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        y=y-p[i];
        if(y>0)
        k++;
}
    printf("%d",k+1);
    return 0;
}

