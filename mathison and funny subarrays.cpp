#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n,i,x,y,arr[100000],brr[100000],k=1,pos;	
	cin >> n;
	for (i=1;i<=n;i++)
	{
	cin >> arr[i];	
    } 
    for(x=1;x<=n;x++)
    {
    	for(y=n;y>1;y--)
    	{
    		if(arr[x]==arr[y])
    		{
              pos = y-x+1;
              brr[k]=pos;
              k++;
              break;
}
}
}
/*sort(brr,brr+k);
cout << brr[0];*/
    long big = *max_element(brr ,brr + k); 
    cout <<  big ;
	/*for (i=1;i<k-1;i++)
    {
    	cout << brr[i]<< " ";
	}*/
	return 0;
}

