#include<stdio.h>

int main()
{
	int i,j,k,x,r,p=0,max=0,pos=1,y;
    int n,a[2000][2000];
    int b[2000],numbs[2000];
    scanf("%d %d %d",&n,&y,&r);
    for(i=1;i<=r;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    for(int z=1;z<=n;z++)
    {
        scanf("%d",&b[z]);
        max=max+b[z];
    }
    //apan ka logic
    int sum=0;
    for(j=1;j<=n-1;j++)
    {  x=1;
       do{ sum=0;
            for(i=1;i<=r;i++)
                    {
					if(a[i][j]<a[i][j+x])
                          sum=sum+a[i][j];
                        else
                          sum=sum+a[i][j+x];
					 }
					 sum=sum-b[j]-b[x+p+1];
					 if(sum>max)
					 {
					 numbs[pos]=j;
					 pos++;
					 numbs[pos]=x+p+1;
					 pos++;
				    }
				/*	printf("\n Where j ka value is %d and compare column is %d , then the  sum is %d \n",j,x+p+1,sum);*/
               x++;
         }while((x+j)<=n);
         p++;
    }
    /*	for ( i = 1; i <pos; i++)
	{
		bool matching = false;
		for (j = 0; (j < i) && (matching == false); j++)if (numbs[i] == numbs[j]) matching = true;
		if (!matching) 
	      printf("%d ",numbs[i]);
}*/
   for(i=1;i<=k;i++)
    {
    printf("%d ",numbs[i]);
    }
    return 0;
}

