#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char xuehao[2];      //学号
	char name[10];      //姓名
	char xingb[5];      //性别
	char sushe[10];        //宿舍号
	char dianhua[13];      //电话
	struct student *next;
	
};
struct sore
{
    char xuehao[2];		//学号
	char kcID[3];		//课程编号
	char kcname[10];	//课程名称
	int xuefen;			//学分
	int pscj;			//平时成绩
	int sycj;			//实验成绩
	int jmcj;			//卷面成绩
	struct sore *next;
};
struct student *lu_ru(struct student *head);//从文本录入基本信息
struct sore *create();                 //键盘录入学生成绩
void chaxun(struct student *head);  //查询信息模块
void cha_xun(struct sore *head);
void display(struct student *head);            //输出模块
struct student *dele(struct student *head);  //删除数据
void xiugai(struct student *head);			//修改数据
int main()
{
	int m;
	struct student *head;
    struct sore *shead;
	head=NULL;
	while(1)
	{
		printf("\t\t\t------请在(0-5)选择----\t\t\t\n");
		printf("\n\n\n\t\t(*^__^*)欢迎使用学生管理系统(*^__^*)\n\n\n\n");
		printf("\t\t----★☆-欢迎使用学生管理系统-★☆---\n");	
		printf("\t\t*==================================*\n");
		printf("\t\t*   1.录入学生信息   2.查询学生信息*\n");
		printf("\t\t*\t\t\t\t   *\n");
		printf("\t\t*==================================*\n");	
		printf("\t\t*   3.删除学生信息   4.修改学生信息*\n");
		printf("\t\t*\t\t\t\t   *\n");
		printf("\t\t*==================================*\n");
		printf("\t\t*  5.输出所有学生信息 0.退出系统   *\n");
		printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\t您的选择是 ");
		scanf("%d",&m);
		system("cls");                  //清除屏幕信息
		switch(m)
		{
		case 1:head=create();break;
		case 2:chaxun(head);break;
		case 3:head=dele(head);break;
		case 4:xiugai(head);break;
		case 5:display(head);break;
		case 0: exit(0);break;
		default:printf("\t输入有误");
		}

			system("pause");

	}
	
	printf("\n\n\n\n\t感谢您的使用!\n\n\n");
	
}



///-------------------录入学生信息
struct sore *create()          
{
	struct sore *listhead,*p,*listp;
	int x,i,d;
	listhead=NULL;
	printf("\n\n\t\t请选择，1，从键盘录入成绩，2，文本读取学生基本信息：\n");
	scanf("%d",&d);
	if(d==1)
	{
		printf("请输入学生总人数：");
		scanf("%d",&x);
		printf("输入学生信息：\n");
		for(i=0;i<x;i++)
		{
			if((p=(struct sore*)malloc(sizeof(struct sore)))==NULL)//创建节点
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
			printf("请依次输入学号、课程编号、课程名称、学分、平时成绩、实验成绩、卷面成绩:\n");
			scanf("%s %s %s %s %s %s %s",listp->xuehao,listp->kcID,listp->kcname,listp->xuefen,listp->pscj,listp->sycj,listp->jmcj);
			if(x>1&&i<x-1)
				printf("请输入下一个学生信息：\n");
			
		}
	}
	else if(d==2)
		listhead=lu_ru(listhead);/////从文档中提取信息
	else printf("您的输入有误\n");
	return listhead;
}



//-----------------------------从文档中提取信息
struct student *lu_ru(struct student *listhead)        
{
    FILE *fp;
	struct student *p,*listp,*f;
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
				fscanf(fp,"%s %s %s %s %s",listp->xuehao,listp->name,listp->xingb,listp->sushe,listp->dianhua);
				f=listp;k++;
			}
			else
			{
				if((p=(struct student*)malloc(sizeof(struct student)))==NULL)   //创建节点
				{
					printf("内存错误！");
					exit(0);
				}
				if(listhead==NULL)
					listhead=p;
				else
					listp->next=p;                                       //连接节点
				f=listp;
				listp=p;
				fscanf(fp,"%s%s%s%s%s",listp->xuehao,listp->name,listp->xingb,listp->sushe,listp->dianhua);
				listp->next=NULL;
			}
		}
		else
		{
			fscanf(fp,"%s%s%s%s%s",listp->xuehao,listp->name,listp->xingb,listp->sushe,listp->dianhua);
			f=listp;listp=listp->next;i++;
		}
	}
	if(i)
	{
		p=listhead;                   //p指向第1个结点
		listhead=p->next;              ///第1个结点脱链，第二个结点变为第一个结点
		free(p);                             //释放删除的节点
	}
	p=listp;
    f->next=NULL;
	free(p);
	p=listhead;
	while(p!=NULL)
	{
		p=p->next;
	}
	printf("读取完毕！\n");
	fclose(fp);
	return listhead;
}



void display(struct student *listhead)             //---------输出所有信息
{
	FILE*fp;
	char ch;int i;
	struct student *p;
	printf("请选择，1输出链表信息，2输出文档信息：");
	scanf("%d",&i);
	if(i==1)
	{
		if(listhead==NULL)
		{
			printf("找不到学生信息！\n");
			return;
		}
		p=listhead;
		printf("学号     姓名      性别       宿舍号码       电话  \n");
		while(p!=NULL)
		{
			printf("%-10s%-10s%-10s%-10s%-10s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
			p=p->next;
		}
	}
	else if(i==2)
	{
		if((fp=fopen("student.txt","r"))==NULL)
		{
			printf("文件名不存在，找不到学生信息！");
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

///---------------------------查询
void	 chaxun(struct student *head)     
{
	
	struct student *p;	
	char n[10];
	int m,k;
	p=head;
	if(head==NULL)
	{
		printf("\t\t学生信息为空；请先录入学生信息！\n\n");
		return ;
	}
	printf("请选择：1.学生信息查询，2.成绩查询");
	scanf("%d",&m);
	if(m==1)
	{
		m=0;
		printf("请选择：1.基本信息查询，2.住宿信息查询");
		scanf("%d",&k);
		if(k==1)
		{
			printf("请选择：1.姓名查询，2.学号查询");
			scanf("%d",&m);
			if(m==1)
			{
				printf("请输入要查询的学生的姓名：");
				scanf("%s",n);
				while(p!=NULL)
				{
					if(!(strcmp(p->name,n)))
					{
						printf("学号： %s\n姓名： %s\n性别： %s\n宿舍号码： %s\n电话号码：%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
						
					}
					p=p->next;
				}
			}
			else if(m==2)
			{
				printf("请输入要查询的学生的学号：");
				scanf("%s",n);
				while(p!=NULL)
				{
					if(!(strcmp(p->xuehao,n)))
					{
						printf("学号： %s\n姓名： %s\n性别： %s\n宿舍号码： %s\n电话号码：%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
						
					}
					p=p->next;
				}			
			}
		}
		else if(k==2)
		{
			printf("请输入要查询的学生的宿舍号码：");
			scanf("%s",n);
			while(p!=NULL)
			{
				if(!(strcmp(p->sushe,n)))
				{
					printf("学号： %s\n姓名： %s\n性别： %s\n宿舍号码： %s\n电话号码：%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
					
				}
				p=p->next;
			}
			
		}
	}
	else if(m==2)
	{
		struct sore *q;	
		char n[10];
		q=head;
		printf("请输入要查询的学生的学号：");
		scanf("%s",n);
		while(q!=NULL)
		{
			if(!(strcmp(q->xuehao,n)))
			{
				printf("学号： %s\n",q->xuehao);
				return;
			}
			q=q->next;
		}	
	}
}




//----------------------删除学生资料
struct student *dele(struct student *listhead)  
{
	struct student *p,*listp,*R;
	int k;
	char n[10];
	if(listhead==NULL)
	{
		printf("学生信息不存在，请录入学生信息！\n");
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
		p=listhead;            //p指向第1个结点
		listhead=p->next;      //第1个结点脱链，第二个结点变为第一个结点
		free(p);               //释放删除的节点
	}
	else if(R!=NULL&&!(strcmp(n,R->name)))
	{
		p=listp->next;       
		listp->next=p->next;
		free(p);
	}
	return listhead;
}


//--------------------修改学生信息
void xiugai(struct student *head)
{
	struct student *p;
	char n[10] ;
	p=head;
	printf("请输入要修改学生信息的姓名：");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("请对学生的学号、姓名、性别、宿舍号码、电话依次修改：");
			scanf("%s%s%s%s%s",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
			return ;
		}
		p=p->next;
	}
	printf("您的输入有误！");
	return head;
}




/*void xiu_gai(struct sore *head)
{
struct sore *p;
p=head;
char n[10];
printf("请输入要修改学生信息的学号：");
scanf("%s",n);
while(p!=NULL)
{
if(!(strcmp(p->xuehao,n)))
{
printf("请对学生的学号、课程编号、课程名称、学分、平时成绩、实验成绩、卷面成绩依次修改：");
scanf("%s%s%s%s%s%s%s",p->xuehao,p->kcID,p->kcname,p->xuefen,p->pscj,p->sycj,p->jmcj);
return ;
}
p=p->next;
}
printf("您的输入有误！");
return;
}*/


/*int RendfromFile (STUDENT stu[])   //   录入学生信息
{
FILE * fp;
int i;
if((fp=fopen("A.txt","r"))==NULL)  //以读方式打开文本文件
{
printf("Failure to open A.txt!\n");  //文件打开失败
exit(0);
}
for(i=0;!feof(fp);i++)
{
fread(&stu[i],sizeof(STUDENT),l,fp);
}
fcolse (fp);
printf ("Total students is %d.\n");   //返回文件中的学生的记录数
return i-1;
}
}
*/
















