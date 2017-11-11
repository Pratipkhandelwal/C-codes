#include<iostream>
using namespace std;

template <class FIRST, class SECOND>

SECOND smaller(FIRST a, SECOND b)
{
	return (a<b ? a : b);
}

int main()
{
	
	int x=89;
	double y=46.78;
    cout << smaller(x,y) << endl;
}
