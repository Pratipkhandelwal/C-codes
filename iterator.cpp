#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>    // std::min_element, std::max_element
using namespace std;

int main()
{
vector<int> v;

for(int i=0;i<10;i++)
{
v.push_back(rand()%100);
}

for(vector<int>::iterator it=v.begin();it!=v.end();it++)
{
	cout <<*it<<endl;
}

cout << "Set copying ..." << endl;
set<int>s;

copy(v.begin(),v.end(),inserter(s,s.begin()));

for(set<int>:: iterator it=s.begin();it!=s.end();it++)
{
cout <<*it<<endl;
}

vector<int>::iterator it;
cout<<"find"<<endl;
it=find(v.begin(),v.end(),64);
cout<<*it<<endl;

sort(v.begin(),v.end());
for(vector<int>::iterator it=v.begin();it!=v.end();it++)
{
	cout <<*it<<endl;
}		
}    
