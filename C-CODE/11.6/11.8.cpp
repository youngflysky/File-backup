#include <stdio.h>

int main() {
	int x, y, z;
	puts("����X,Y��ֵ��");
	printf("X:");
	scanf("%d", &x);
	printf("Y:");
	scanf("%d", &y);
	z = x % y;
	printf("X%%Y=%d", z);
	return 0;
}