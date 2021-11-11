#include <stdio.h>

int main() {
	double a;
	printf("请输入您的身高：");
	scanf("%f", &a);
	printf("您的标准体重是%4.1f斤。", (a - 100) * 1.9);

	return 0;
}
