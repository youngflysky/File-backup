#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//����
int main()
{
	const int num = 10;//const:�����������г����Եı����������ϻ��Ǳ���
    
     #define a 1000    //define:��ʶ������
	printf("%d", a);

	/*ö�ٱ���*/
	enum sex
	{
		male,//Ĭ����ֵ��0��ʼ����
		female,
		secrect
	};
	printf("\n%d\n%d\n%d\n", male, female, secrect);

}