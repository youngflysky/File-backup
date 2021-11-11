#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h> 
int main()
{	
	while(1)
	{
		float a, b, c;
		puts("请输入一元二次方程（ax^2 + bx + c = 0）的三个系数：");
		printf("a = ");scanf("%f",&a);
		getchar();
		printf("b = ");scanf("%f",&b);
		getchar();
		printf("c = ");scanf("%f",&c);
		getchar();
		printf("方程  %gX^2 + %gX +%g = 0 求解如下：\n", a, b, c);
		float Q, x1, x2;
		Q = b * b - 4 * a * c;
		if (a > 0 || a < 0)
		{
			if (Q > 0)
			{ 
				x1 = (-b + sqrt(Q)) / (2 * a); 
				x2 = (-b - sqrt(Q)) / (a + a); 
				printf("方程解\n\tx1=%.3f\n\tx2=%.3f\n", x1, x2); 
			}
		    else if (Q == 0)
			{
				x1 = -b / (a + a); 
				printf("方程解\n\tx=%.3f\n", x1); 
			}
			      else puts("方程无解");
		}
		else { x1 = (-c) / b; printf("方程解\n\tx=%.3f\n", x1); }
		printf("\n\"X+回车\"退出，"
				"\"任意键+回车\"继续，"
				"直接回车可清屏：");
		char ch;
		ch=getchar();
		if(ch=='\n')
		{	
			system("cls");
		}
		else if(ch=='X'||ch=='x')
		{
			break;
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}