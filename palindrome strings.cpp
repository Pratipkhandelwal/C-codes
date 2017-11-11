#include <bits/stdc++.h>
using namespace std;
#define M 26
#include<string.h>

bool Palindrome(string str, int* count_array)
{
    for (int i = 0; i < 26; ++i)
    {
        count_array[i] = 0;
    }
    int length = str.length();
 
    for (int i = 0; i < length; i++)
    {
        count_array[str[i] - 'A']++;
    }
    int odd_count = 0;
    for (int i = 0; i < M; i++)
    {
        if (count_array[i] % 2 == 1)
        {
            odd_count++;
        }
    }
    if ((length % 2 == 1 && odd_count == 1 ) || (length %2 == 0 && odd_count == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
string reverse(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return rev;
}
 

void print(string str)
{
    int count_array[M];
    if (!Palindrome(str, count_array))
    {
        return;
    }
    int length = str.length();

    string half = "";
    char mid;
    for (int i = 0; i < M; i++)
    {
        if(count_array[i] % 2 == 1)
        {
            mid = i + 'A';
        }
        half += string(count_array[i] / 2, i + 'A');
    }
    string palindrome_string;
    do
    {
        palindrome_string = half;
        if (length % 2 == 1)
        {
            palindrome_string += mid;
        }
        palindrome_string += reverse(half);
        transform(palindrome_string.begin(), palindrome_string.end(), palindrome_string.begin() , ::toupper);
        cout<<palindrome_string<<endl;
    }
    while (next_permutation(half.begin(), half.end()));
}
 
int main()
{
	string str;
    cin>>str;
    print(str);
    return 0;
}

