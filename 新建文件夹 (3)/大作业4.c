#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int huahua=0;//全局变量

struct list
{
	long  int  xuehao;           //学号
	char name[20];               //姓名
	char sex[5];                 //性别
	char sushe[20];               //宿舍号码
	char Tel[20];                //号码
	struct list *next;
};
struct last
{
	long int xuehao;
	char bianhao[50];//编号
	char mingcheng[20];//名称
	int xuefen;//学分
	int pingshi;//平时成绩
	int shiyan;//实验成绩
	int juanmian;//卷面成绩
	double zonghe;//综合成绩
	double shidexuefen;//实得学分
	struct last *nex;//B
};
struct list *shanchua(struct list *head);           //删除函数A
struct list *adda(struct list *head);            //添加函数A
void shuchua(struct list *head);                //输出函数A
struct list *shurua();                          //输入函数A
void xiugaia(struct list *head);                 //修改函数A
void chaxuna(struct list *head);                 //查询函数 A
void baocuna(struct list *listhead);            //将数据输出到文本A
struct list *delealla(struct list *listhead);    /*释放链表全部结点*////A
struct last *shanchub(struct last *head);           //删除函数B
struct last *addb(struct last *head);            //添加函数B
void shuchub(struct last *head);                //输出函数B
struct last *shurub();                          //输入函数B
void xiugaib(struct last *head);                 //修改函数B
void chaxunb(struct last *head);                 //查询函数 B
void baocunb(struct last *lasthead);            //将数据输出到文本B
struct last *deleallb(struct last *lasthead);    /*释放链表全部结点*///B
int main()
{
	struct list *head;
	int ch,d,f;
	head=NULL;
	while(1)
	{
		/*if(f%5==0)
			system("cls");
		f++;*/
		printf("\n\n\t\t\t欢迎使用学生管理系统\n\n\n\n");
	printf("\t\t请选择(0-12):\n");
	printf("\t丨===================================================丨\n");
    printf("\t丨*1.输入个人信息  2.输出个人信息  3.修改个人信息    丨\n");
	printf("\t丨---------------------------------------------------丨\n");
	printf("\t丨*4.查询个人信息  5.添加个人信息  6.删除个人信息    丨\n");
	printf("\t丨---------------------------------------------------丨\n");
	printf("\t丨*7.输入成绩      8.输出成绩      9.修改成绩        丨\n");
	printf("\t丨---------------------------------------------------丨\n");
  	printf("\t丨*10.查询成绩     11.添加成绩     12.删除成绩       丨\n");
    printf("\t丨---------------------------------------------------丨\n");
	printf("\t丨*       0.退出系统                                 丨\n");
	printf("\t丨===================================================丨\n");
	printf("\n\t\t您的选择是\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:head=shurua();break;        //输入A
		case 2:shuchua(head);break;        //输出A
		case 3:xiugaia(head);break;         //修改A
		case 4:chaxuna(head);break;         //查询A
		case 5:head=adda(head);break;       //添加A
        case 6:head=shanchua(head);break;      //删除A
        case 7:head=shurub();break;        //输入B
		case 8:shuchub(head);break;        //输出B
		case 9:xiugaib(head);break;         //修改B
		case 10:chaxunb(head);break;         //查询B
		case 11:head=addb(head);break;       //添加B
		case 12:head=shanchua(head);break;      //删除B
		case 0:	printf("是否保存修改，1.保存修改，2.不保存修改");
			scanf("%d",&d);
			if(d==1)
			{
				baocuna(head);
				head=delealla(head);
				baocunb(head);
			    head=deleallb(head);break;
			}
		default:printf("输入有误，请重新输入");
		}
		if(ch==0)
			break;
		}
	return 0;
}
struct list *shurua()//输入A个人信息
{
	struct list *listhead,*p,*listp;
	int x,i,d;
    listhead=NULL;
	printf("请输入 1 进行键盘输入:");
	scanf("%d",&d);
	if(d==1)
	{
	printf("请输入学生总人数：");
	scanf("%d",&x);
	printf("输入学生信息");
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
			printf("学号:");
	        scanf("%d",&listp->xuehao);
		    printf("姓名: ");
		    scanf("%s",listp->name);
	        printf("性别:" );
		    scanf("%s",listp->sex);
		    printf("宿舍: ");
		    scanf("%s",listp->sushe);
		    printf("号码: ");
		    scanf("%s",listp->Tel);
			printf("请输入下一个学生信息：\n");
			listp->next=NULL;
	}
	}

		printf("是否保存修改，1保存数据，输入2不保存！");
		scanf("%d",&d);
		if(d==1)
			baocuna(listhead);
		return listhead;
}
void baocuna(struct list *listhead)//保存A
{
	struct list *p;
	FILE *fp;
	printf("s输入到文件A.txt：");
	if((fp=fopen("A.txt","w"))==NULL)
	if(listhead==NULL)
	{
		printf("打开失败，链表为空！");
		return;
	}
	p=listhead;
	fprintf(fp,"学号    姓名      性别      宿舍       号码     \n");
	while(p!=NULL)
	{
		fprintf(fp,"%-10d%-10s%-9s%-10s%-20s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
		p=p->next;
	}
	fclose(fp);
	printf("保存完毕！");
}
void shuchua(struct list *listhead)             //输出A所有信息
{
	struct list *p;
	if(listhead==NULL)
	{
		printf("链表为空！");
		return;
	}
	p=listhead;
	printf("学号        姓名       性别     宿舍       号码     \n");
	while(p!=NULL)
	{
     	printf("%-10d%-10s%-9s%-10s%-20s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
		p=p->next;
	}
}
struct list *adda(struct list *listhead)     //插入节点，添加学生信息A
{
	struct list *p,*listp;
	int k,i,n=0;
	if(listhead==NULL)
	{
		printf("未找到学生信息\n");/*如果链表为空*/
		return listhead;
	}
	k=1;
	p=listhead;
		while(p!=NULL)
	{
		p=p->next;
		n++;
	}
		printf("共有%d个位置可插入学生信息\n",n+1);
		printf("输入新插入学生位置：");/*输入插入结点数据*/
		scanf("%d",&i);
	listp=listhead;
	while(listp!=NULL&&k<i-1)
	{
		listp=listp->next;
		k++;
	}
	if(listp==NULL||i<1)
	printf("插入学生信息无效\n");
	else if(i==1)                      ///头节点插入
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)
		{
			printf("内存申请错误！\n");
			exit(0);
		}
	   	printf("学号、姓名、性别、宿舍、号码：\n");
		scanf("%d%s%s%s%s",&p->xuehao,p->name,p->sex,p->sushe,p->Tel);             ///插入信息
		p->next=listhead;
		listhead=p;
	}
	else
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)      //不是头节点的插入A
		{
			printf("内存申请错误！\n");
			exit(0);
		}
		printf("学号 姓名 性别 宿舍 号码 ：\n");
		scanf("%d%s%s%s%s",&p->xuehao,p->name,p->sex,p->sushe,p->Tel);             ///插入信息A
		p->next=listp->next;
		listp->next=p;
	}
	return listhead;
}
struct list *delealla(struct list *listhead)/////释放节点A
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
void xiugaia(struct list *head)//修改信息A
{
	struct list *p;
	int n;
	p=head;
	printf("请输入要改的学生学号：");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
	   printf("请对学生的学号  姓名  性别  宿舍  号码依次修改：");
       scanf("%d%s%s%s%s",&p->xuehao,p->name,p->sex,p->sushe,p->Tel);
	   return ;
	}
	p=p->next;
	}
    printf("您的输入有误！");
		return;

}
void chaxuna(struct list *head)//查询学生个人信息
{
	struct list *p;
	int n,m;
	char name[20];
	char sushe[20];
	p=head;
	printf("查询学生信息,请选择查询方式：1.学号查询，2.姓名查询，3.宿舍查询");
	scanf("%d",&m);
	if(m==1)
	{
	printf("请输入要查询的学生的学号：");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
	   printf("学号    %d\n姓名：   %s\n性别：   %s\n宿舍：   %s\n号码：   %s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
	   return ;
	}
	}
    printf("您的输入有误！");
		return;
	}else if(m==2)
	{
		printf("请输入要查询的学生的姓名：");
	scanf("%s",name);
	while(p!=NULL)
	{
	if(!(strcmp(p->name,name)))
	{
	   printf("学号    %d\n姓名：   %s\n性别：   %s\n宿舍：   %s\n号码：   %s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
	   return ;
	}
	p=p->next;
	}
    printf("您的输入有误！");
		return;
	}
	else if(m==3)
        {
            printf("请输入要查询的宿舍号：");
            scanf("%s",sushe);
            while(p!=NULL)
            {
                if(!(strcmp(p->sushe,sushe)))
                {
                    printf("学号    %d\n姓名：   %s\n性别：   %s\n宿舍：   %s\n号码：   %s\n",p->xuehao,p->name,p->sex,p->sushe,p->Tel);
                    p=p->next;
                }
            }
            return;
        }else
        {
            printf("您的输入有误！");
            return;
            }
}
struct last *shurub()//输入B信息
{
	struct last *lasthead,*p,*lastp;
	int x,i,d;
    lasthead=NULL;
	printf("请选择1.键盘输入:");
	scanf("%d",&d);
	if(d==1)
	{
	printf("请输入学生总人数：");
	scanf("%d",&x);
	huahua =x;//全局变量进行赋值
	printf("输入学生信息");
	for(i=0;i<x;i++)
	{
		if((p=(struct last*)malloc(sizeof(struct last)))==NULL)//创建节点
		{
			printf("内存错误！");
			exit(0);
		}
		if(lasthead==NULL)
			lasthead=p;
		else
			lastp->nex=p;        //连接节点
			lastp=p;
			printf("学号:");
	        scanf("%d",&lastp->xuehao);
			printf("课程编号:");
			scanf("%s",lastp->bianhao);
			printf("课程名称:");
	        scanf("%s",lastp->mingcheng);
			printf("学分:");
	        scanf("%d",&lastp->xuefen);
			printf("平时成绩:");
	        scanf("%d",&lastp->pingshi);
			printf("实验成绩:");
	        scanf("%d",&lastp->shiyan);
			printf("卷面成绩:");
	        scanf("%d",&lastp->juanmian);
			printf("请输入下一个学生的信息:\n");
			lastp->nex=NULL;
		}
	}
		printf("是否保存修改，1保存数据，输入2不保存！");
		scanf("%d",&d);
		if(d==1)
			baocunb(lasthead);
		return lasthead;
}
void baocunb(struct last *lasthead)//保存B
{
	struct last *p;
	FILE *fp;
	printf("s输入到文件B.txt：");
	if((fp=fopen("B.txt","w"))==NULL)
	if(lasthead==NULL)
	{
		printf("打开失败，链表为空！");
		return;
	}
	p=lasthead;
	fprintf(fp,"学号  课程编号  课程名称  学分  平时成绩  实验成绩  卷面成绩  综合成绩  实际学分 \n");
	while(p!=NULL)
	{
		if(p->shiyan==-1)
		{
			p->zonghe=p->pingshi*0.3+p->juanmian*0.7;
			if(p->zonghe>=90&&p->zonghe<=100)
				p->shidexuefen=p->xuefen;
			else if(p->zonghe>=80&&p->zonghe<90)
				p->shidexuefen=p->xuefen*0.8;
			else if(p->zonghe>=70&&p->zonghe<80)
				p->shidexuefen=p->xuefen*0.75;
			else if(p->zonghe>=60&&p->zonghe<70)
				p->shidexuefen=p->xuefen*0.6;
			else
				p->shidexuefen=0;
		}
		else
		{
			p->zonghe=p->shiyan*0.15+p->juanmian*0.7+p->shiyan*0.15;
			if(p->zonghe>=90&&p->zonghe<=100)
				p->shidexuefen=p->xuefen;
			else if(p->zonghe>=80&&p->zonghe<90)
				p->shidexuefen=p->xuefen*0.8;
			else if(p->zonghe>=70&&p->zonghe<80)
				p->shidexuefen=p->xuefen*0.75;
			else if(p->zonghe>=60&&p->zonghe<70)
				p->shidexuefen=p->xuefen*0.6;
			else
				p->shidexuefen=0;
		}
		fprintf(fp,"%-9d%-9s%-9s%-9d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
		p=p->nex;
	}
	fclose(fp);
	printf("保存完毕！");
}
struct last *deleallb(struct last *lasthead)/////释放节点B
{
	struct last *p;
	p=lasthead;
	while(p!=NULL)
	{
		lasthead=p->nex;
		free(p);
		p=lasthead;
	}
	return p;
}
void shuchub(struct last *lasthead)             //输出B所有信息
{
	struct last *p,*q,*h,*m;
	int n,temp;
	m=(struct last*)malloc(sizeof(struct last));
	if(lasthead==NULL)
	{
		printf("链表为空！");
		return;
	}
	p=lasthead;
	//printf("请选择输出方式：1.升序输出,2.降序输出");
	//scanf("%d",&n);
	//if(n==1)
	printf(" 学号  课程编号  课程名称  学分  平时成绩  实验成绩  卷面成绩  综合成绩  实际学分 \n");
	p=lasthead;
	while(p!=NULL)
	{
     	printf("%-9d%-9s%-9s%-10d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
		p=p->nex;
	}
	printf(" 学号  课程编号  课程名称  学分  平时成绩  实验成绩  卷面成绩  综合成绩  实际学分 \n");
    p=lasthead;
	for(p;p!=NULL;p=p->nex)
	{
	    h=p;
	    for(q=p->nex;q!=NULL;q=q->nex)
	    {
	        if(h->zonghe>q->zonghe)
	        {
	           h=q;
            }
       }
       if(h != p)
        {
            m->xuehao=p->xuehao;
            p->xuehao=h->xuehao;
            h->xuehao=m->xuehao;

            strcpy(m->bianhao,p->bianhao);
            strcpy(m->mingcheng,p->mingcheng);
			m->xuefen=p->xuefen;
			m->pingshi=p->pingshi;
			m->shiyan=p->shiyan;
			m->juanmian=p->juanmian;
            m->zonghe=p->zonghe;

            strcpy(p->bianhao,h->bianhao);
            strcpy(p->mingcheng,h->mingcheng);
			p->xuefen=h->xuefen;
			p->pingshi=h->pingshi;
			p->shiyan=h->shiyan;
			p->juanmian=h->juanmian;
            p->zonghe=h->zonghe;

            strcpy(h->bianhao,m->bianhao);
            strcpy(h->mingcheng,m->mingcheng);
			h->xuefen=m->xuefen;
			h->pingshi=m->pingshi;
			h->shiyan=m->shiyan;
			h->juanmian=m->juanmian;
			h->zonghe=m->zonghe;
       }
     //  printf("%-9d%-9s%-9s%-10d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
    }
    p=lasthead;
	while(p!=NULL)
	{
     	printf("%-9d%-9s%-9s%-10d%-9d%-9d%-9d%-9.2lf%-9.2lf\n",p->xuehao,p->bianhao,p->mingcheng,p->xuefen,p->pingshi,p->shiyan,p->juanmian,p->zonghe,p->shidexuefen);
		p=p->nex;
	}
}
struct last *addb(struct last *lasthead)     //插入节点，添加成绩B
{
	struct last *p,*lastp;
	int k,i,n=0;
	if(lasthead==NULL)
	{
		printf("未找到学生信息\n");/*如果链表为空*/
		return lasthead;
	}
	k=1;
	p=lasthead;
		while(p!=NULL)
	{
		p=p->nex;
		n++;
	}
		printf("共有%d个位置可插入学生信息\n",n+1);
		printf("输入新插入学生位置：");/*输入插入结点数据*/
		scanf("%d",&i);
	lastp=lasthead;
	while(lastp!=NULL&&k<i-1)
	{
		lastp=lastp->nex;
		k++;
	}
	if(lastp==NULL||i<1)
	printf("插入学生信息无效\n");
	else if(i==1)                      ///头节点插入
	{
		if((p=(struct last*)malloc(sizeof(struct last)))==NULL)
		{
			printf("内存申请错误！\n");
			exit(0);
		}
	   	printf(" 学号:\n");
		scanf("%d",&lastp->xuehao);
		printf("课程编号:\n");
		scanf("%s",lastp->bianhao);
		printf("课程名称:\n");
		scanf("%s",lastp->mingcheng);
		printf("学分:\n");
		scanf("%d",&lastp->xuefen);
		printf("平时成绩:\n");
		scanf("%d",&lastp->pingshi);
		printf("实验成绩:\n");
		scanf("%d",&lastp->shiyan);
		printf("卷面成绩:\n");
		scanf("%d",&lastp->juanmian);             ///插入信息
		p->nex=lasthead;
		lasthead=p;
	}
	else
	{
		if((p=(struct last*)malloc(sizeof(struct last)))==NULL)      //不是头节点的插入
		{
			printf("内存申请错误！\n");
			exit(0);
		}
		printf(" 学号:\n");
		scanf("%d",&lastp->xuehao);
		printf("课程编号:\n");
		scanf("%s",lastp->bianhao);
		printf("课程名称:\n");
		scanf("%s",lastp->mingcheng);
		printf("学分:\n");
		scanf("%d",&lastp->xuefen);
		printf("平时成绩:\n");
		scanf("%d",&lastp->pingshi);
		printf("实验成绩:\n");
		scanf("%d",&lastp->shiyan);
		printf("卷面成绩:\n");
		scanf("%d",&lastp->juanmian);             ///插入信息
        p->nex=lastp->nex;
		lastp->nex=p;
	}
	return lasthead;
}
void xiugaib(struct last *head)//修改信息A
{
	struct last *p;
	int n;
	p=head;
	printf("请输入要改的学生学号：");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
		printf(" 学号:\n");
		scanf("%d",&p->xuehao);
		printf("课程编号:\n");
		scanf("%s",p->bianhao);
		printf("课程名称:\n");
		scanf("%s",p->mingcheng);
		printf("学分:\n");
		scanf("%d",&p->xuefen);
		printf("平时成绩:\n");
		scanf("%d",&p->pingshi);
		printf("实验成绩:\n");
		scanf("%d",&p->shiyan);
		printf("卷面成绩:\n");
		scanf("%d",&p->juanmian);
	    return ;
	}
	p=p->nex;
	}
    printf("您的输入有误！");
		return;

}
void chaxunb(struct last *head)//查询学生成绩B
{
	struct last *p;
	int n,m;
	char name[20];
	p=head;
	printf("查询学生信息,请选择查询方式：1.学号查询");
	scanf("%d",&m);
	if(m==1)
	{
	printf("请输入要查询的学生的学号：");
	scanf("%d",&n);
	while(p!=NULL)
	{
	if(p->xuehao==n)
	{
		printf("学号:%d\n",p->xuefen);
		printf("课程编号:%s\n",p->bianhao);
		printf("课程名称:%s\n",p->mingcheng);
		printf("学分:%d\n",p->xuefen);
		printf("平时成绩:%d\n",p->pingshi);
		printf("实验成绩:%d\n",p->shiyan);
		printf("卷面成绩:%d\n",p->juanmian);
		printf("综合成绩:%.2lf\n",p->zonghe);
		printf("实得学分:%.2lf\n",p->shidexuefen);
		return ;
	}
	p=p->nex;
	}
    printf("您的输入有误！");
		return;
	}
	else
	{
		printf("您的输入有误！");
		return;
	}
}
struct list *shanchua(struct list *listhead)     //删除节点，删除学生信息A
{
	struct list *p,*listp,*r;
	int i,k;
	if(listhead==NULL)
	{
		printf("链表为空\n");
		return listhead;
	}
	printf("输入删除学生学号：");
	scanf("%d",&i);
	huahua--;
	k=1;
	r=listhead;
	while(r!=NULL&&r->xuehao!=i)
	{
		listp=r;
		r=r->next;
		k=k+1;
	}
	if(r==NULL||r->xuehao!=i)
		printf("删除学生学号无效\n");
	else if(k==1)
	{
		p=listhead;            /*p指向第1个结点*/
		listhead=p->next;      ///第1个结点脱链，第二个结点变为第一个结点
		free(p);       //释放删除的节点
	}
	else if(r!=NULL&&r->xuehao==i)
	{
	   p=listp->next;
	   listp->next=p->next;
	   free(p);
	}
	return listhead;
}

