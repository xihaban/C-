#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct list
{
	char name[20];              //姓名
	char home[50];               //家庭地址
	long bian[20];                //邮政
	char hao[25];                //号码
	char xing[10];               //性别
	struct list *next;
};

struct list *dele(struct list *head);           //删除数据//
struct list *insert(struct list *head);         //添加模块
void display(struct list *head);               //输出模块
struct list *create();                          //输入模块
void xiugai(struct list *head);                ///修改模块
void chaxun(struct list *head);                 //查询模块 
struct list *ti_qu(struct list *head);           /////从文档中提取信息
void cu_cun(struct list *listhead);               ///将数据输出到文本
struct list *deleall(struct list *listhead);    /*释放链表全部结点*/
int main()
{
	int ch,d;
	struct list *head;
	head=NULL;
	printf(" \n\n\n\t欢迎使用学生通讯管理系统\n\n\n\n");
	system("pause");
	while(1)
	{ 
		system("cls");/////////////////////清屏
		printf("\n\t                欢迎使用学生通讯管理系统             \n");
		printf("\t ----------------------------------------------------------------------\n");
		printf("\t丨********************************************************************丨\n");
		printf("\t丨*                                                                  *丨\n");
		printf("\t丨* 1.录入资料   2.查询个人信息   3.输出全部学生信息   4.修改信息    *丨\n");
		printf("\t丨********************************************************************丨\n");
		printf("\t丨* 5.删除资料   6.添加学生信息   7.从文档中读取信息  0.退出系统    *丨\n");
		printf("\t丨*                                                                  *丨\n");
		printf("\t-----------------------------------------------------------------------\n");
		printf("请选以上序号进行操作\n");
		scanf("%d",&ch);
		system("cls");/////////////////////清屏
		switch(ch)
		{
		case 1:head=create();break;        //输入
		case 2:chaxun(head);break;         //查询
		case 3:display(head);break;           //输出
		case 4:xiugai(head);break;             //修改 
		case 5:head=dele(head);break;         //删除
		case 6:head=insert(head);break;     //添加
		case 7:head=ti_qu(head);break;    /////从文档中提取信
		case 0:
			printf("是否保存修改，1保存数据，输入2不保存！");
			scanf("%d",&d);
			if(d==1)
				cu_cun(head);
			head=deleall(head);break;        //退出
		default:printf("\n\n您的输入有误！\n\n");
			
		}	
		if(ch==0)
			break;
		system("pause");

	}
	printf("\n\n\n\n\t\t感谢您的使用！\n\n\n");
	return 0;
}





struct list *create()     ///-------------------录入学生信息
{
	struct list *listhead,*p,*listp;
	int x,i,d;
	listhead=NULL;
	printf("\n\n\t\t请选择，1，键盘输入，2，文本读取：");
	scanf("%d",&d);
	if(d==1)
	{
		printf("请输入学生总人数：");
		scanf("%d",&x);
		printf("输入学生信息：\n");
		for(i=0;i<x;i++)
		{
			if((p=(struct list*)malloc(sizeof(struct list)))==NULL)//创建节点
			{
				printf("内存错误！");
				exit(0);
			}
			if(listhead==NULL)
				listhead=p;
			else
				listp->next=p;        //连接节点
			listp=p;
			listp->next=NULL;
			printf("请依次输入姓名、家庭地址、邮政编码、号码、性别：\n\n");
			scanf("%s%s%s%s%s",listp->name,listp->home,listp->bian,listp->hao,listp->xing);
			if(x>1&&i<x-1)
			printf("请输入下一个学生信息：\n");
			
		}
	}
	else if(d==2)
		listhead=ti_qu(listhead);/////从文档中提取信息
	else printf("您的输入有误！");
	return listhead;
}




void display(struct list *listhead)             //---------输出所有信息
{
	FILE*fp;
	char ch;int i;
	struct list *p;
	printf("请选择，1输出链表信息，2输出文档信息：");
	scanf("%d",&i);
	if(i==1)
	{
		if(listhead==NULL)
		{
			printf("找不到通讯信息！");
			return;
		}
		p=listhead;
		printf("姓名      家庭住址           邮编       号码         性别  \n");
		while(p!=NULL)
		{
			printf("%-10s%-19s%-10s%-15s%-3s\n",p->name,p->home,p->bian,p->hao,p->xing);
			p=p->next;
		}
	}
	else if(i==2)
	{
		if((fp=fopen("student.txt","r"))==NULL)
		{
			printf("文件名不存在，找不到通讯信息！");
			exit(0);
		}
		while(!feof(fp))
		{ 
			ch=fgetc(fp);
			putchar(ch);
		}
		fclose(fp);
	}
}






struct list *insert(struct list *listhead)     //------插入学生资料
{
	struct list *p,*listp;
	int k,i=0;
	if(listhead==NULL)
	{
		printf("通讯录还没建立！\n");	/*如果链表为空*/
		return listhead;
	}      /*输入插入结点数据*/
	p=listhead;
	while(p!=NULL)
	{
		p=p->next;
		i++;
	}
	printf("有1到%d个位置可以选择，输入新插入位置：",i+1);
	scanf("%d",&i);          
	k=1;
	listp=listhead;
	while(listp!=NULL&&k<i-1)
	{
		listp=listp->next;
		k=k+1;
	}
	if(listp==NULL||i<1)
		printf("插入位置为无效值\n");
	else if(i==1)                      ///头节点插入
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)
		{
			printf("内存申请错误！\n");
			exit(0);
		}
		printf("姓名、家庭地址、邮政编码、号码、性别：\n");
		scanf("%s%s%s%s%s",p->name,p->home,p->bian,p->hao,p->xing);   ///插入信息
		p->next=listhead;
		listhead=p;
	}
	else
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)  //不是头节点的插入
		{
			printf("内存申请错误！\n");
			exit(0);
		}
		printf("姓名、家庭地址、邮政编码、号码、性别：\n");
		scanf("%s%s%s%s%s",p->name,p->home,p->bian,p->hao,p->xing);  ///插入信息
		p->next=listp->next;
		listp->next=p;
	}
	return listhead;
}






struct list *dele(struct list *listhead)     //-------------删除学生资料
{
	struct list *p,*listp,*R;
	int k;
	char n[10];
	if(listhead==NULL)
	{
		printf("该通讯录不存在请录入学生信息！\n");
		return listhead;
	}
	printf("输入要删除的学生的姓名：");
	scanf("%s",n);
	k=1;
	R=listhead;
	while(R!=NULL&&(strcmp(n,R->name)))
	{
		listp=R;
		R=R->next;
		k=k+1;
	}
	if(R==NULL||(strcmp(n,R->name)))
		printf("删除无效\n");
	else if(k==1)
	{
		p=listhead;            /*p指向第1个结点*/
		listhead=p->next;///第1个结点脱链，第二个结点变为第一个结点
		free(p);       //释放删除的节点
	}
	else if(R!=NULL&&!(strcmp(n,R->name)))
	{
		p=listp->next;       
		listp->next=p->next;
		free(p);
	}
	return listhead;
}



struct list *deleall(struct list *listhead)/////---------释放节点
{
	struct list *p;
	p=listhead;
	while(p!=NULL)
	{
		listhead=p->next;
		free(p);
		p=listhead;
	}
	return p;
}



void xiugai(struct list *head)//--------------------修改学生信息
{
	struct list *p;
	char n[10];
	p=head;
	printf("请输入要改的学生的姓名：");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("请对学生的姓名、家庭地址、邮编、号码、性别依次修改：");
			scanf("%s%s%s%s%s",p->name,p->home,p->bian,p->hao,p->xing);
			return ;
		}
		p=p->next;
	}
    printf("您的输入有误！");
	return;
	
}




void chaxun(struct list *head)///////查询
{
	struct list *p;
	char n[10];
	int k;
	p=head;
	if(head==NULL)
	{
	printf("\t找不到学生通讯录，请建立学生通讯录!\n\n");
	return;
	}
	printf("请选择1.姓名查询,2.号码查询：");
	scanf("%d",&k);
	if(k==1)
	{
	printf("请输入要查询的学生的姓名：");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("姓名：   %s\n家庭住址：%s\n邮编：   %s\n号码：   %s\n性别：   %s\n",p->name,p->home,p->bian,p->hao,p->xing);
			return ;
		}
		p=p->next;
	}}
   else if(k==2)
   {
		printf("请输入要查询的学生的学号：");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->hao,n)))
		{
			printf("姓名：   %s\n家庭住址：%s\n邮编：   %s\n号码：   %s\n性别：   %s\n",p->name,p->home,p->bian,p->hao,p->xing);
			return ;
		}
		p=p->next;
	}
   }
    printf("\n\t您的输入有误！\n\n");
	return;
	
}



void cu_cun(struct list *listhead)//-----将链表信息写到文本文件
{
	struct list *p;
	FILE *fp;
	if((fp=fopen("student.txt","w"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	if(listhead==NULL)
	{
		printf("打开失败，链表为空！");
		return;
	}
	p=listhead;
	fprintf(fp,"姓名      家庭住址           邮编      号码           性别     \n");
	while(p!=NULL)
	{
		fprintf(fp,"%-10s%-19s%-10s%-16s%-3s\n",p->name,p->home,p->bian,p->hao,p->xing);
		p=p->next;
	}
	fclose(fp);
	printf("保存完毕！");
}




struct list *ti_qu(struct list *listhead)/////从文档中提取信息
{
    FILE *fp;
	struct list *p,*listp,*f;
	int k=0,i=0;
	if((fp=fopen("student.txt","r"))==NULL)
	{
		printf("文件名不存在！");
		exit(0);
	} 
	listp=listhead;
    while(!feof(fp))
	{ 
		if(listp==NULL||listp->next==NULL)
		{
			if(listp!=NULL&&listp->next==NULL&&!k)
			{
				fscanf(fp,"%s%s%s%s%s",listp->name,listp->home,listp->bian,listp->hao,listp->xing);
				f=listp;k++;
			}
			else
			{
				if((p=(struct list*)malloc(sizeof(struct list)))==NULL)//创建节点
				{
					printf("内存错误！");
					exit(0);
				}
				if(listhead==NULL)
					listhead=p;
				else
					listp->next=p;        //连接节点
				f=listp;
				listp=p;
				fscanf(fp,"%s%s%s%s%s",listp->name,listp->home,listp->bian,listp->hao,listp->xing);
				listp->next=NULL;
			}
		}else{
			fscanf(fp,"%s%s%s%s%s",listp->name,listp->home,listp->bian,listp->hao,listp->xing);
			f=listp;listp=listp->next;i++; 
		}
	}
	if(i)
	{
		p=listhead;            //p指向第1个结点
		listhead=p->next;      ///第1个结点脱链，第二个结点变为第一个结点
		free(p);       //释放删除的节点
	}
	p=listp;
    f->next=NULL;
	free(p);
	p=listhead;
	printf("姓名      家庭住址           邮编       号码         性别  \n");
	while(p!=NULL)
	{
		printf("%-10s%-19s%-10s%-15s%-3s\n",p->name,p->home,p->bian,p->hao,p->xing);
		p=p->next;
	}
printf("读取完毕！\n");
	fclose(fp);
	return listhead;
}
