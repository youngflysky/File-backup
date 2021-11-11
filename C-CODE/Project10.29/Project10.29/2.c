#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//常量
int main()
{
	const int num = 10;//const:常变量，具有常属性的变量，本质上还是变量
    
     #define a 1000    //define:标识常量；
	printf("%d", a);

	/*枚举变量*/
	enum sex
	{
		male,//默认数值从0开始递增
		female,
		secrect
	};
	printf("\n%d\n%d\n%d\n", male, female, secrect);

}