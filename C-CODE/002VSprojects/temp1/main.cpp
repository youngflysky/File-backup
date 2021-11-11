#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	puts("请在下面输入一元二次方程组的系数:");
	printf("a="); scanf("%f", &a);
	printf("b="); scanf("%f", &b);
	printf("c="); scanf("%f", &c);
	printf("方程  %gX^2 + %gX +%g = 0 求解如下：\n", a, b, c);
	float Q, x1, x2;
	Q = b * b - 4 * a * c;
	if (a > 0 || a < 0)
		if (Q > 0) { x1 = (-b + sqrt(Q)) / (2 * a); x2 = (-b - sqrt(Q)) / (a + a); printf("方程解\tx1=%.3f\tx2=%.3f\n", x1, x2); }
		else  if (Q == 0) { x1 = -b / (a + a); printf("方程解\tx=%.3f\n", x1); }
		else puts("方程无解");
	else { x1 = (-c) / b; printf("方程解\tx=%.3f\n", x1); }
	getchar();
	return 0;
}