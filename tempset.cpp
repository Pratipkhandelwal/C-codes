#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>    // std::min_element, std::max_element
using namespace std;

int main()
{
multiset<int> s;

for(int i=0;i<10;i++)
{
	s.insert(10-i);
}

set<int>::iterator it;
it=s.find(6);

s.erase(it);
s.insert(1);

for(set<int>::iterator it=s.begin();it!=s.end();it++)
{
	cout <<*it<<endl;
}
}
