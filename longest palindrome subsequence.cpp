import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be “Main” only if the class is public. */
class Ideone
{
static int lps(String s){
int n = s.length();
int l[][] = new int[n][n];
for(int i=0;i<n;i++) l[i][i] = 1;
for(int i=2;i<=n;i++){
for(int j=0;j<n-i+1;j++){
int k = i+j-1;
if(s.charAt(j) == s.charAt(k) && i==2) l[j][k] = 2;
else if(s.charAt(j) == s.charAt(k)) l[j][k] = l[j+1][k-1] + 2;
else l[j][k] = Math.max(l[j+1][k],l[j][k-1]);
}
}
return l[0][n-1];
}
public static void main (String[] args) throws java.lang.Exception
{
// your code goes here
String seq = “GEEKS FOR GEEKS”;
int n = seq.length();
System.out.println (“The lnegth of the LPS is “+ lps(seq));
}
}


