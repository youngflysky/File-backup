#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int x;
	int op;
	x = 2;
	op = 1;
	int sum = 0;
	if (op == n) {
		sum = x;
	}
	for (x = 3; x <= 10000; x++) {
		int i;
		int isPrime = 1;
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			op += 1;
			if (op >= n && op <= m) {
				sum += x;
			}
			else if(op>m){break;
			}
		}
	}
printf("%d", sum);
return 0;
}
