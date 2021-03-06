#include<stdio.h>
void merge(int A[],int B[],int p,int q,int r)
{
  int arr1[100000],arr2[100000],i,j,k;
  for(i=p;i<=r;i++)
  {
    arr1[i] = A[i];
    arr2[i] = B[i];
  }
  i=p;
  j=q+1;
  k=p;
  for(;i<=q&&j<=r;k++)
  {
    if(arr1[i]<arr1[j])
    {
        A[k] = arr1[i];
        B[k] = arr2[i];
        i++;
    }
    else
    {
        A[k] = arr1[j];
        B[k] = arr2[j];
        j++;
    }
  }
  if(i>q)
  {
    for(;j<=r;k++,j++)
    {
        A[k] = arr1[j];
        B[k] = arr2[j];
    }
  }
  if(j>r)
  {
    for(;i<=q;k++,i++)
    {
        A[k] = arr1[i];
        B[k] = arr2[i];
    }
  }
}

void merge_sort(int A[],int B[],int p,int r)
{
  int q;
  if(p<r)
  {
    q = (p+r)/2;
    merge_sort(A,B,p,q);
    merge_sort(A,B,q+1,r);
    merge(A,B,p,q,r);
  }
}

int main()
{
  int N,S[100000],D[100000],i,finish,counter=0;
  scanf("%d\n",&N);
  for(i=0;i<N;i++)
  {
    scanf("%d %d",&S[i],&D[i]);
    D[i]=S[i]+D[i];
  }
  merge_sort(D,S,0,N-1);
  finish=D[0];
  counter=1;
  for(i=1;i<N;i++)
  {
    if(S[i]>=finish)
    {
        counter++;
        finish=D[i];
    }
  }
  printf("%d\n",counter);
  return 0;
}
