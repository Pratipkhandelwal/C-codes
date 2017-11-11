import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be “Main” only if the class is public. */
class Ideone
{
static boolean part(int a[],int n){
int sum = 0;
for(int i=0;i<n;i++){
sum = sum+a[i];
}
if(sum%2 != 0) return false;
boolean p[][] = new boolean[sum/2+1][n+1];
for(int i=0;i<=n;i++) p[0][i] = true;
for(int i=1;i<=sum/2;i++) p[i][0] = false;
for(int i=1;i<=sum/2;i++){
for(int j=1;j<=n;j++){
p[i][j] = p[i][j-1];
if(i>=a[j-1]){
p[i][j] = p[i][j]||p[i-a[j-1]][j-1];
}
}
}
return p[sum/2][n];
}
public static void main (String[] args) throws java.lang.Exception
{
// your code goes here
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
int a[] = new int[n];
for(int i=0;i<n;i++) a[i] = sc.nextInt();
if(part(a,n)) System.out.println(“Yes”);
else System.out.println(“No”);
}
}


