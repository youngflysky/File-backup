#include <stdio.h>

int main() {
	int x;
	scanf("%d",&x);//��������
	
	if(x<0){
	printf("fu ");
	x=-x;
	} 			//x��Ϊ�������fu����������
	
	int p=x;   //����x��ֵ��
	
	int i=1;
	while(x>9){
	i++;
	x/=10;
	} 		//���x��λ����
	
	x=p;	//��ԭx����ֵ��
	
	int n;
	for(n=i;n>0;n--){
	
	int s=1;
	int i1;
	for(i1=1;i1<n;i1++){
	s*=10;
	}			//�����һλ������������
	
	int op;
	op=x/s;		//�����һλ��
	if(n>1){	//�ж��Ƿ�Ϊĩλ����
	switch(op){
	case 0: printf("ling ");break;
	case 1:	printf("yi ");break;
	case 2:	printf("er ");break;
	case 3:	printf("san ");break;
	case 4: printf("si ");break;		//��ĩλ�����ո������
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
	case 4: printf("si");break;   //ĩλ��ֱ�������
	case 5: printf("wu");break;
	case 6: printf("liu ");break;
	case 7: printf("qi");break;
	case 8: printf("ba");break;
	case 9: printf("jiu");break;	
	}
	}
	x=x%s;	//��ȥ�Ѿ���õĵ�һλ����
	}
	system("pause");
	return 0;
}
