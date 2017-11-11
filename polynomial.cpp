#include<stdio.h>
#include<math.h>
 
int main()
{
      int array[30], degree, x_val, count, sum = 0;
      printf("\nEnter the Degree of Polynomial:\t");
      scanf("%d", &degree);
      printf("\nEnter the Co - Efficients:\n");
      for(count = 0; count <=degree; count++)
      {
            printf("\nCo - Efficient of A[%d]: \t", degree);
            scanf("%d", &array[count]);
      }
      printf("\nThe Polynomial:\n\n");
      for(count = degree; count >= 0; count--)
      {
            if(array[count] != 0)
            {
                  printf("%dx^%d + ", array[count], count);
            }
      }
      printf("%d", array[count]);
      printf("\n\nEnter the Value of X:\t");
      scanf("%d", &x_val);
      for(count = degree; count >= 0; count--)
      {
            sum = sum + array[count]*pow(x_val, count);
      }
      if (sum > 0) printf("1");
      if (sum < 0) printf("-1");
      return 0;
}

