#include <stdio.h>

int gcd(int a, int b) {
	while (b) {
		int c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int n, x, y;
	scanf("%d", &n);
	for (int b = n/2; b < n; b++) {
		int a = n - b;
		if (gcd(a, b) == 1 && a<b) {
			printf("%d %d\n", a, b);
			break;
		}
	}
}

