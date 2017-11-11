#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>    // std::min_element, std::max_element
using namespace std;

int main()
{
	list<int> l;
	l.push_back(0);
	
	for(int i=0;i<10;i++)
	{
		l.push_back(i+1);
	}
	
	list<int>:: iterator it =find(l.begin(),l.end(),7);
	
	l.insert(it,100);
	
	it=find(l.begin(),l.end(),8);
	l.erase(it);
	
	for(list<int>::iterator it=l.begin();it!=l.end();it++)
{
	cout <<*it<<endl;
}
	
	
	
	
	
	
	
	
}
