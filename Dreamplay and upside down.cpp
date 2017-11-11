#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
string p;
cin >> p;
int k=0,i;
int l=p.length();
if(l%2==0)
{
for(i=0;i<l/2;i++)
{
	if(p[i]==(p[l-i-1]))
	continue;
	else
	k++;
}
}
else
{
	for(i=0;i<l/2;i++)
	{
		if(p[l/2-1-i]==(p[l/2+i+1]))
		continue;
		else
		k++;
	}
}

cout << k << endl;
return 0;
}
