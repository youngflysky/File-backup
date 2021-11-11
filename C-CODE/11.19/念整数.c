#include <stdio.h>

int main() {
	int x;
	scanf("%d",&x);//函数输入
	
	if(x<0){
	printf("fu ");
	x=-x;
	} 			//x若为负数输出fu，并化正；
	
	int p=x;   //储存x的值；
	
	int i=1;
	while(x>9){
	i++;
	x/=10;
	} 		//求出x的位数；
	
	x=p;	//还原x的数值；
	
	int n;
	for(n=i;n>0;n--){
	
	int s=1;
	int i1;
	for(i1=1;i1<n;i1++){
	s*=10;
	}			//求出第一位数的数量级；
	
	int op;
	op=x/s;		//求出第一位数
	if(n>1){	//判断是否为末位数；
	switch(op){
	case 0: printf("ling ");break;
	case 1:	printf("yi ");break;
	case 2:	printf("er ");break;
	case 3:	printf("san ");break;
	case 4: printf("si ");break;		//非末位数带空格输出；
	case 5: printf("wu ");break;
	case 6: printf("liu ");break;
	case 7: printf("qi ");break;
	case 8: printf("ba ");break;
	case 9: printf("jiu ");break;	
	}
	}else
	{
	switch(op){
	case 0: printf("ling");break;
	case 1:	printf("yi");break;
	case 2:	printf("er");break;
	case 3:	printf("san");break;
	case 4: printf("si");break;   //末位数直接输出；
	case 5: printf("wu");break;
	case 6: printf("liu ");break;
	case 7: printf("qi");break;
	case 8: printf("ba");break;
	case 9: printf("jiu");break;	
	}
	}
	x=x%s;	//舍去已经算好的第一位数；
	}
	system("pause");
	return 0;
}
