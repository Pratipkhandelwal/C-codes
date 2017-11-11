#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	   long* hop=(long*)malloc(1000000*sizeof(long));
       string* arr=(string*)malloc(1000000*sizeof(string));
       long* a=(long*)malloc(1000000*sizeof(long));
       long int c=0,i,length,k=0,j,count=0,p=0,r=0,n;
       string string;
       cin >> string ;
       length=string.length();
       cin >> n;
       for(i=0;i<n;i++)
       {
       	cin >> a[i];
       } 
      for( c = 0 ; c < length ; c++ )
      {
         for( i = 1 ; i <= length - c ; i++ )
         {
           std::string sub = string.substr(c, c+i);
            arr[k]=sub;
            k++;
         }
      }
  for(i=0;i<k;i++)
      {
    	for(j=0;j<n;j++)
    	{
    		    std::string s = to_string(a[j]);
    		    if(arr[i].find(s))
    				{
    			     p=1;
    				}
    		    else
    		    {
    		    	p=0;
    		    }
    		    hop[r]=p;
    		    r++;
    	}
    	}
 	if(n==1)
    	{
    	     for(i=0;i<r;i++)
    	     {
    		if(hop[i]==1)
    		count++;
    	}
    	}
    	else if(n>1)
    	{
   	     for(i=0;i<r-n;i=i+n)
   	     {
   	    	 for(j=i;j<n+i-1;j++)
   	    	 {
   	    		 if(hop[j]!=1 && hop[j+1]!=1)
   	    		 {
   	    			 count=0;
   	    			 break;
   	    		 }
   	    		     else
   	    		     {
   	    		     count++;
   	    	 }
   	    	 }
   	     }
    	}
    	cout << count;
     }
