#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	puts("������������һԪ���η������ϵ��:");
	printf("a="); scanf("%f", &a);
	printf("b="); scanf("%f", &b);
	printf("c="); scanf("%f", &c);
	printf("����  %gX^2 + %gX +%g = 0 ������£�\n", a, b, c);
	float Q, x1, x2;
	Q = b * b - 4 * a * c;
	if (a > 0 || a < 0)
		if (Q > 0) { x1 = (-b + sqrt(Q)) / (2 * a); x2 = (-b - sqrt(Q)) / (a + a); printf("���̽�\tx1=%.3f\tx2=%.3f\n", x1, x2); }
		else  if (Q == 0) { x1 = -b / (a + a); printf("���̽�\tx=%.3f\n", x1); }
		else puts("�����޽�");
	else { x1 = (-c) / b; printf("���̽�\tx=%.3f\n", x1); }
	getchar();
	return 0;
}