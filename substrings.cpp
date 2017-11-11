#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
 
// Function to print all sub strings
void subString(string s, int n) 
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    int p=0;
    for (int i = 0; i < n; i++) 
    {
        for (int len = 1; len <= n - i; len++)
        { 
          std::string z = s.substr(i, len);
          int length=z.length();
          size_t x = std::count(z.begin(), z.end(), '0');
          size_t y = std::count(z.begin(), z.end(), '1');
          if(x==y && length > p)
		  p=length;
		  
}
}
  cout << p;
}
 
// Driver program to test above function
int main() 
{
    int k;
    scanf("%d",&k);
    string s;
    cin >> s;
    subString(s,s.length());
    return 0;
}
