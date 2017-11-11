#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
     long long poly[100000],n,count,val=0,pro=0;
      cin >> n;
      for(count = 0; count <=n; count++)
      {
            cin >> poly[count];
      }
      long long y=1000000;
      for(count = 0; count <= n; count++)
      {
            val = val + poly[count]*pow(y, count);
      }
            for(count = 0; count <= n; count++)
      {
           pro = pro - poly[count]*(pow(y, count));
      }
      cout << val << pro << endl;
    if(val>0 && pro >0)
    cout<<"1 1";
    else if(val>0 && pro <0 )
    cout<<"1 -1";
    else if(val <0 && pro >0)
    cout<<"-1 1";
    else if(val<0 && pro <0)
    cout <<"-1 -1";
    else if(val==0 && pro>0)
    cout <<"0 1";
    else if(val>0 && pro==0)
    cout <<"1 0";
    else if(val==0 && pro <0)
    cout <<"0 -1";
    else if(val<0 && pro==0)
    cout<<"-1 0";
    else
    cout <<"0 0";

      return 0;
}

