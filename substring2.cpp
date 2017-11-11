#include <iostream>
#include <map>
#include <string>

int main() {
	int ans = 0;
	int n;
	std::string str;
	std::cin >> n >> str;
	int cur = 0;
	std::map<int, int> last;
	last[0] = -1;
	for(int i = 0; i < n; i++) {
		cur += (str[i] == '0' ? -1 : 1);
		if(last.count(cur)) {
			ans = std::max(ans, i - last[cur]);
		} else {
			last[cur] = i;
		}
	}
	std::cout << ans << '\n';
}



@rajatde


#include "bits/stdc++.h"
using namespace std;
const int N = 2e5 + 5;
int n;
char str[N];
int sum;
int idx[N];
int main(){
	scanf("%d" , &n);
	sum = n;
	memset(idx , -1 , sizeof(idx));
	idx[sum] = 0;
	scanf("%s" , str + 1);
	int ans = 0;
	for(int i = 1 ; i <= n ; ++i){
		if(str[i] == '1'){
			++sum;
		}
		else{
			--sum;
		}
		if(idx[sum] != -1){
			ans = max(ans , i - idx[sum]);
		}
		else{
			idx[sum] = i;
		}
	}
	printf("%d\n" , ans);
}

