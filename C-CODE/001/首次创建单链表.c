#include<stdio.h>
#include<stdlib.h>

//���嵥���ڵ�����ݽṹ
typedef struct note{
	int val;
	struct note* last;	
} Note;

//����һ���ṹ��ָ���ͷ�����۱�ͷ�Ƿ�Ϊ�գ��ýṹ���ַ��Ϊ�գ�
//ȡ���ַ����Ϊͷ�ڵ㣬���ں���������
typedef struct list{
	Note* head;
} List;

//�ú����������½ڵ����������ͷ��Ϊ�����µ�ͷ�ڵ�
void add(List*,int);

//������������������е�����ֵ
void print(List*);

//�ú����������free������ڴ�
void Free(List* plist);


int main()
{
	List list;
	
	//��ʼ��ͷ�ڵ�Ϊ�գ�
	list.head=NULL;
	int number;
	do
	{
		scanf("%d",&number);
		if(number!=-1)
		{
			add(&list,number);
		}
	}while(number!=-1);
	
	print(&list);
	Free(&list);


 	return 0;
}

void add(List* plist,int number)
{
	Note *p=(Note*)malloc(sizeof(Note));
	p->val=number;
	p->last=NULL;
	if(!plist->head)
	{
		plist->head=p;
	}
	else
	{
		p->last=plist->head;
		plist->head=p;	
	}
}

void print(List* plist)
{
	Note* p=NULL;
	for(p=plist->head;p;p=p->last)
	{
		printf("%d ",p->val);
	}
}

void Free(List* plist)
{
	Note* p=plist->head;
	Note *q;
	while(p)
	{
		q=p;
		p=p->last;
		free(q);
	}
}