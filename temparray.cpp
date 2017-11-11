#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>    // std::min_element, std::max_element
using namespace std;

template <class T>
class call{
	public:
		T a[2];
		T add();
		call();
};

template<class T>

call<T>::call()
{
	cin>>a[0]>>a[1];
}
template<class T>
T call<T>::add(){
	return a[0]+a[1];
}

int main()
{
	call<float> floatcall;
	cout<<floatcall.add();
}

