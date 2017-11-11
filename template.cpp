#include<iostream>
using namespace std;

template <class pk>
pk addcrap(pk a,pk b)
{
	return a+b;
}

int main(){
	
	double x=7.89, y=34.65,z;
	z=addcrap(x,y);
	cout << z << endl;n
}
