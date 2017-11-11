#include<string>
#include<iostream>
using namespace std;
int top=-1;
long long stack[100000];
    void push(int x)
    {
        top=top+1;
        stack[top]=x;
    }
        void pop ( ) 
    {
            top=top-1;
    }
    int size()
    {
    	return top+1;
	}
int main()
{
	long long n,k,val=0,s,i;
	string name;
	cin>>n;
	for(i=0;i<n;i++)
	{
			cin>>k;
			if(k!=0)
	    	push(k);	
	    	else
	    	pop();
	    }
	    s=size();
	    for(i=0;i<s;i++)
	    {
	    	val=val+stack[i];
		}
	cout<<val<<endl;
	return 0;
}
