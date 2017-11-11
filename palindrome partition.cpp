Here we are using dynamic programming. First we know that all the strings of length 1 are aways palindromes so we first make them true and then from length=2 onwards we calculate to build the matrix in the bottom up manner. So for length = 2 to n we iterate through the string for i number of times and then we find out whether a string between the indices i and j is palindrome or not and then accordingly we fill the matrix. Then we fill the mincut array c with the min numberof cuts. In this code we also print all the possible palindrome cuts. the Java code for it is given below:

/* package whatever; // don’t place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be “Main” only if the class is public. */
class Ideone
{
static int Palipart(String s, int n){
boolean p[][] = new boolean[n][n];
for(int i=0;i<n;i++) p[i][i] = true;
for(int l=2;l<=n;l++){
for(int i=0;i<n-l+1;i++){
int j = i+l-1;
if(l==2) p[i][j] = (s.charAt(i)==s.charAt(j));
else p[i][j] = (s.charAt(i)==s.charAt(j))&&p[i+1][j-1];
}
}
int c[] = new int[n];
for(int i=0;i<n;i++){
if(p[0][i]==true){
c[i]=0;
for(int k=0;k<=i;k++) System.out.print(s.charAt(k));
System.out.println();
}
else{
c[i] = Integer.MAX_VALUE;
for(int j=0;j<i;j++){
if(p[j+1][i]==true && 1+c[j]<c[i]){
c[i] = 1+c[j];
for(int k=j+1;k<=i;k++) System.out.print(s.charAt(k));
System.out.println();
}
}
}
}
return c[n-1];
}
public static void main (String[] args) throws java.lang.Exception
{
// your code goes here
Scanner sc = new Scanner(System.in);
String s = sc.nextLine();
int n = s.length();
System.out.println(“The min no of partitions req is ” + Palipart(s,n));
}
}


