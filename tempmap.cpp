#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>    // std::min_element, std::max_element
using namespace std;

int main()
{
	pair<char,int> x;
	map<char,int> m;
	
	for(char ch='a';ch<='z';ch++)
	{
		
		x.first=ch;
		x.second=(int) ch;
		m.insert(x);
	}
	
	map<char,int>::iterator it=m.begin();
	
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	
	cout<<"Finding a value"<<endl;
	it=m.find('p');
	cout<<(*it).second<<endl;
}
