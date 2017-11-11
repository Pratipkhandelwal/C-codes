#include <bits/stdc++.h>
#include<iostream>
 
#define For(i,a,b) for(int i=a; i<b; i++)
#define Rfor(i,b,a) for(int i=b; i>a; i--)
#define Auto(a) for(auto &val : a)
#define iterate(A, i) for(auto i = A.begin(); i!=A.end(); i++)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vl;
typedef vector<vector<ll> > vvl;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef pair<int, int> pii;
typedef vector<vector<pair<int, int> > > vvp;
 

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

