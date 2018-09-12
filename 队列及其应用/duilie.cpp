#include<stdio.h>
#include<stdlib.h>
typedef int QelemType;

typedef struct QNode{
	QelemType data;
	struct QNode *next;
}QNode,*QueuePtr;

typedef struct {
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;

bool  InitQueue(LinkQueue &Q){   //-------创建队列
	Q.front=Q.rear=(QueuePtr)malloc(sizeof(QNode));
	if(!Q.front)
		return false;
	Q.front->next=NULL;
	return true;
}
bool jishu(LinkQueue &Q)  //-------统计元素个数
{
	int m=0;
	QNode *p=Q.front->next;
	if(Q.front==Q.rear)
		return false;
	while(p!=NULL)
	{
		m++;
		p=p->next;
	}
	printf("队中元素个数为  %d个。\n",m);
	return  true;
}
bool  EnQueue(LinkQueue &Q,QelemType e){    //-------元素入队
	QNode *p=(QueuePtr)malloc(sizeof(QNode));
	if(p==NULL)
		return false;
	p->data=e;
	p->next=NULL;
	Q.rear->next=p;
	Q.rear=p;
	return true;
}
bool  GetHead(LinkQueue Q,int &e) 

{ 
	if(Q.front!=Q.rear) 
	{ 
		e=Q.front->next->data; 
		return true; 
	} 
	else 
		return false; 
}
bool  DeQueue(LinkQueue &Q,QelemType &e){ //-----元素出队
	if(Q.front==Q.rear)
		return false;
	QNode *p=Q.front->next;
	e=p->data;
	Q.front->next=p->next;
	if(Q.rear==p)
		Q.rear=Q.front;
	free(p);
	return true;
}
bool  PrintQueue(LinkQueue &Q){  //------输出队列元素
	if(Q.front==Q.rear)
		return false;
	QNode *p=Q.front->next;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
	return true;
}
void main()
{
	LinkQueue Q;
	int choice,e,k=0,n,j=0,i=0,l=0,t;
	
	while(1)
	{
		printf("1.创建队列\n");
		printf("2.元素入队\n");
		printf("3.元素出队\n");
		printf("4.输出队列元素\n");
		printf("5.杨辉三角形\n");
		printf("6.元素个数统计\n");
		printf("7.退出\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:InitQueue(Q);break;
		case 2:printf("输入入队元素：");
			scanf("%d",&e);
			EnQueue(Q,e);
			break;
		case 3:DeQueue(Q,e);
			printf("出队元素：%d\n",e);
			break;
		case 4:PrintQueue(Q);
			break;
		case 5:
			printf("输入行数:");
			scanf("%d",&n);
			InitQueue(Q);
			
			EnQueue(Q,1);
			for(t=0;t<n-1;t++)
				printf(" ");
			printf("1\n");
			for(i=2;i<=n;i++)
			{
				for(t=0;t<n-i;t++)
					printf(" ");
				k=0;
				for(j=1;j<i;j++)
				{
					DeQueue(Q,e);
					l=e;
					printf("%d ",k+l);
					t=k+l;
					EnQueue(Q,t);
					k=l;
				}
				printf("1\n");
				EnQueue(Q,1);
			}
			break;
		case 6:
			jishu(Q);
			break;
		case 7:exit(0);break;
		default:break;
		}
	}
}

