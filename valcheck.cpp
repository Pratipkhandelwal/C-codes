#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f(int m,int n) {
     int ans = 1,k=0;
     while (m - n >= 0) {
       ans = ans * 2;
       m = m - n;
       k++;
     }
     printf("%d",k);
   }

int main()
{
	int x=120,y=13;
	f(x,y);
	return 0;
}

