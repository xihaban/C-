#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char xuehao[5];         //学号
	char name[10];          //姓名
	char xingb[5];          //性别
	int  sushe;             //宿舍号
	char dianhua[11];       //电话
	char kcID[10][10];		//课程编号
	char kcname[10][10];	//课程名称
	int xuefen[10];			//学分
	int chengji[10][3];	    //三门成绩
	double zonghe[10][2];   //最终成绩
	struct student *next;
	
};
void tt(struct student *p){
	int i=0;
	int j=0;
	for(i=0;i<10;i++)
		strcpy(p->kcID[i],"");		
	for(i=0;i<10;i++)
		strcpy(p->kcname[10],"");	
	for(i=0;i<10;i++)
		p->xuefen[i]=-1;		
	for(i=0;i<10;i++)
		for(j=0;j<3;j++)
			p->chengji[i][j]=0;	    
		for(i=0;i<10;i++)
			for(j=0;j<2;j++)
				p->zonghe[i][j]=0;   
}

struct student *ti_qu(struct student *head);         //从A文本录入基本信息
void tiqu(struct student *head);                     //从B文本录入基本信息
struct student *cha_ru(struct student *head);        //插入信息模块
void chaxun(struct student *head);                   //查询信息模块
void display(struct student *head);                  //输出模块
struct student *dele(struct student *head);          //删除数据
void xiugai(struct student *head);		        	 //修改数据
void bao_cunA(struct student *studenthead);          //保存A数据
void bao_cunB(struct student *studenthead);          //保存B数据
struct student *deleall(struct student *studenthead); //释放节点
int main()
{
	int m,d,count=0;
	char x[15],y[15]={"123"};
	struct student *head;
	head=NULL;
	printf("\n\n\t\t\t(*^__^*)--欢迎使用学生管理系统--(*^__^*)\n\n\n\n\n");
	printf("\t请输入进入系统密码\n");
	scanf("%s",x);
	while((strcmp(x,y))&&count<4)   
	{
		
		count++;
		if(count==3)
		{
			printf("您输入错误已达三次\n\n\t\t谢谢您的使用!\t 再见!\n");
			exit(0);
		}
		printf("您的密码有误!请重新输入!\n");
		scanf("%s",x);	
	}
	system("cls");                //清除屏幕信息
		while(1)
		{    
			printf("\n\n\n\n\t\t\t\t------请在(0-5)选择----\t\t\t\n");
			printf("\t\t-------★☆-----欢迎使用学生管理系统-------★☆--------\n");	
			printf("\t\t*=====================================================*\n");
			printf("\t\t*   1.录入学生信息   2.查询学生信息    3.删除学生信息 *\n");
			printf("\t\t*\t\t\t\t\t\t      *\n");
			printf("\t\t*=====================================================*\n");	
			printf("\t\t*   4.修改学生信息  5.输出所有学生信息  6.插入学生信息*\n");
			printf("\t\t*\t\t\t\t\t\t      *\n");
			printf("\t\t*=====================================================*\n");
			printf("\t\t*               0.退出系统                            *\n");
			printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t您的选择是 ");
			scanf("%d",&m);
			system("cls");                 //清除屏幕信息
			switch(m)
			{
			case 1:head=ti_qu(head);break;
			case 2:chaxun(head);break;
			case 3:head=dele(head);break;
			case 4:xiugai(head);break;
			case 5:display(head);break;
			case 6:head=cha_ru(head);break;
			case 0:
				printf("是否保存修改，1保存\t2不保存！");
				scanf("%d",&d);
				if(d==1)
				{ bao_cunA(head);
				bao_cunB(head);}
				head=deleall(head);break;        //退出
			default:printf("\t输入有误\n");
			}
			if(m==0) break;
			system("pause");
			
		}
			system("cls");
		printf("\n\n\n\n\t感谢您的使用!\t  再见!\n\n\n");
		
}



struct student *ti_qu(struct student *studenthead)/////从A.txt文档中提取信息
{	
    FILE *fp;
	struct student *p,*studentp,*f;
	char h[20];
	int i=0;
	if((fp=fopen("A.txt","r"))==NULL)
	{
		printf("文件名不存在！");
		exit(0);
	} 
	studentp=studenthead;
    while(!feof(fp))
	{ 
		if(i!=0)
		{
			if((p=(struct student*)malloc(sizeof(struct student)))==NULL)//创建节点
			{
				printf("内存错误！");
				exit(0);
			}
			if(studenthead==NULL)
				studenthead=p;
			else
				studentp->next=p;        //连接节点
			f=studentp;
			studentp=p;
			fscanf(fp,"%s%s%s%d%s",studentp->xuehao,studentp->name,studentp->xingb,&studentp->sushe,studentp->dianhua);
			tt(studentp);
			tiqu(studentp);
			studentp->next=NULL;
		}else
		{
			for(i=0;i<5;i++)
				fscanf(fp,"%s",h);
		}
	}
    f->next=NULL;
	free(p);
	printf("读取完毕！\n");
	fclose(fp);
	return studenthead;
}



void  tiqu(struct student *p) /////从B.txt文档中提取信息
{	
    FILE *fp;
	char h[20];
	int i=0;
	int y=0;
	char xuehao[10];
	char kcID[10];		//课程编号
	char kcID1[10]="fhjksdfhkdfjhdua";//课程编号
	char kcname[10];	//课程名称
	int xuefen;	//学分
	int chengji[3];	    //三门成绩
	double zonghe[2];   //最终成绩
	double sum=0;
	if((fp=fopen("B.txt","r"))==NULL)
	{
		printf("文件名不存在！");
		exit(0);
	} 
	while(!feof(fp))
	{ 
		if(i!=0)
		{
			
			fscanf(fp,"%s%s%s%d%d%d%d",xuehao,kcID,kcname,&xuefen,&chengji[0],&chengji[1],&chengji[2]);	
			
			if(!strcmp(xuehao,p->xuehao)&&strcmp(kcID,kcID1))
			{
				strcpy(kcID1,kcID);
				zonghe[0]=0;
				if(chengji[1]==-1)                       
				{
					sum=0.3*(chengji[0])+0.7*(chengji[2]);            //根据数据计算综合成绩并存入数组内
					(zonghe[0])=sum;
					sum=0;
				}
				else {
					sum=0.15*(chengji[0])+0.15*(chengji[1])+0.7*(chengji[2]);
					zonghe[0]=sum;
					sum=0;
				}
				zonghe[1]=0;
				if((zonghe[0])>=90&&zonghe[0]<=100)           //根据综合成绩进一步计算实得学分并存入数组内
					zonghe[1]=xuefen;
				else if((zonghe[0])>=80)
					zonghe[1]=xuefen*0.8;
				else if(zonghe[0]>=70)
					zonghe[1]=xuefen*0.75;
				else if(zonghe[0]>=60)
					zonghe[1]=xuefen*0.6;
				else 
					zonghe[1]=0;
				
				strcpy(p->kcID[y],kcID);
				strcpy(p->kcname[y],kcname);
				p->xuefen[y]=xuefen;
				p->chengji[y][0]=chengji[0];
				p->chengji[y][1]=chengji[1];
				p->chengji[y][2]=chengji[2];
				p->zonghe[y][0]=zonghe[0];
				p->zonghe[y][1]=zonghe[1];
				y++;
				
			}
		}
		else
		{
			for(i=0;i<7;i++)
				fscanf(fp,"%s",h);
		}
	}
	
	fclose(fp);
	
}


void display(struct student *studenthead)             //---------输出所有信息
{
	FILE*fp;
	char ch;
	int i=0,j=0;
	struct student *p;
	printf("请选择，1输出链表信息，2输出文档信息：\n");
	scanf("%d",&i);
	if(i==1)
	{
		if(studenthead==NULL)
		{
			printf("找不到学生信息！\n");
			return;
		}
		p=studenthead;
		printf("学号     姓名      性别       宿舍号码       电话  \n");
		while(p!=NULL)
		{
			printf("%-10s%-10s%-10s%-10d%-10s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
			p=p->next;
		}
	}
	else if(i==2)
	{     
		printf("请选择  1.学生基本信息  2.学生成绩信息：\n");
		scanf("%d",&j);
		if(j==1)
		{
			if((fp=fopen("A.txt","r"))==NULL)
			{
				printf("文件名不存在，找不到学生信息！");
				exit(0);}
			while(!feof(fp))
			{ 
				ch=fgetc(fp);
				putchar(ch);}
			fclose(fp);
		}
		else if(j==2)
		{
			if((fp=fopen("C.txt","r"))==NULL)
			{
				printf("文件名不存在，找不到学生信息！");
				exit(0);}
			while(!feof(fp))
			{ 
				ch=fgetc(fp);
				putchar(ch);}
			fclose(fp);
		}
	}
}

///---------------------------查询
void chaxun(struct student *head)     
{
	
	struct student *p;	
	char a[10],n[5];
	int m,k,l=0,x,j=0;                   //定义标志l
	p=head;
	if(head==NULL)
	{
		printf("\t\t学生信息为空；请先录入学生信息！\n\n");
		return ;
	}
	printf("\n\t\t-----★☆-----------★☆------\n");	
	printf("\t\t1.学生信息查询      2.成绩查询\n");
	printf("\t\t-----★☆-----------★☆------\n");	
	scanf("%d",&m);
	if(m==1)
	{
		m=0;
		printf("\n\t\t-----★☆-----------★☆------\n");	
		printf("\t\t1.基本信息查询，2.住宿信息查询\n");
		printf("\t\t-----★☆-----------★☆------\n");	
		scanf("%d",&k);
		if(k==1)
		{
			printf("\n\t\t-----★☆-----------★☆------\n");	
			printf("\t\t1.姓名查询        2.学号查询  \n");
			printf("\t\t-----★☆-----------★☆------\n");	
			scanf("%d",&m);
			if(m==1)
			{
				printf("请输入要查询的学生的姓名：\n");
				scanf("%s",a);
				while(p!=NULL)
				{
					if(!(strcmp(p->name,a)))
					{
						printf("\n学号： %s\n姓名： %s\n性别： %s\n宿舍号码： %d\n电话号码：%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
						l=1;
						
					}
					p=p->next;	
				}
				if(l==0)
				{
					printf("查找失败!!\n");
					l=0;	
				}
			}
			else if(m==2)
			{
				printf("请输入要查询的学生的学号：\n");
				scanf("%s",n);
				while(p!=NULL)
				{
					if(!strcmp(p->xuehao,n))
					{
						printf("学号： %s\n姓名： %s\n性别： %s\n宿舍号码： %d\n电话号码：%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);l=1;
					}
					p=p->next;
				}
				if(l==0)
				{
					printf("查找失败!!\n");
					l=0;	
				}
			}
		}
		else if(k==2)
		{
			printf("请输入要查询的学生的宿舍号码：\n");
			scanf("%d",&x);
			system("cls");                        //清除屏幕信息
			while(p!=NULL)
			{
				if(p->sushe==x)
				{
					printf("学号： %s\n姓名： %s\n性别： %s\n宿舍号码 %d\n电话号码：%s\n\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);l=1;
					
				}
				p=p->next;
			}
			if(l==0)
			{
				printf("查找失败!!\n");
				l=0;	
			}
			
		}
	}
	else if(m==2)
	{
		struct student *p;	
		char n[5];
		p=head;
		printf("请输入要查询的学生的学号：\n");
		scanf("%s",n);
		system("cls");                  //清除屏幕信息
		while(p!=NULL)
		{
			if(!(strcmp(p->xuehao,n)))
			{
				printf("学号%5s\t姓名:%5s\n",p->xuehao,p->name);
				for(j=0;j<10;j++)
					if(p->xuefen[j]!=-1)
						printf("学分%3d课程名称:%10s\t课程编号:%10s\t综合成绩:%5.2lf\t实得学分:%5.2lf\n",p->xuefen[j],p->kcname[j],p->kcID[j],p->zonghe[j][0],p->zonghe[j][1]);l=1;
			}
			p=p->next;
		}
		if(l==0)
		{
			printf("查找失败!!");
			l=0;	
		}
	}
	
}




//----------------------删除学生资料
struct student *dele(struct student *studenthead)  
{
	struct student *p,*studentp,*R;
	int k,l=0,j;
	char n[10];
	if(studenthead==NULL)
	{
		printf("学生信息不存在，请录入学生信息！\n");
		return studenthead;
	}
	printf("输入要删除的学生的姓名：\n");
	scanf("%s",n);
	k=1;
	R=studenthead;
	while(R!=NULL&&(strcmp(n,R->name)))
	{
		studentp=R;
		R=R->next;
		k=k+1;
		l=1;
	}
	if(R==NULL||(strcmp(n,R->name)))
		printf("删除无效!\n");
	else if(k==1)
	{
		p=studenthead;            //p指向第1个结点
		studenthead=p->next;     //第1个结点脱链，第二个结点变为第一个结点
		printf("删除成功!\n");  
		printf("是否保存:  1.保存 \t2.放弃\n");
		scanf("%d",&j);
		if(j==1)
		{	bao_cunA(studenthead); 	bao_cunB(studenthead);}
		free(p);             //释放删除的节点
		
	}
	else if(R!=NULL&&!(strcmp(n,R->name)))
	{
		p=studentp->next;       
		studentp->next=p->next;
		printf("删除成功!"); 
		printf("是否保存:  1.保存 \t2.放弃\n");
		scanf("%d",&j);
		if(j==1)
		{	bao_cunA(studenthead); 	bao_cunB(studenthead);}
		free(p);
	}
	return studenthead;
}


//--------------------修改学生信息
void xiugai(struct student *head)
{
	struct student *p;
	char n[10] ;int m;
	p=head;
	printf("请输入要修改学生信息的姓名：");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("请对学生的学号、姓名、性别、宿舍号码、电话依次修改：\n");
			scanf("%s%s%s%d%s",p->xuehao,p->name,p->xingb,&p->sushe,p->dianhua);
			printf("是否保存修改：1.是\t2.否\n");  
			scanf("%d",&m);
			if(m==1)
			{
				bao_cunA(head);
				
			}
			else if(m==2)
			{
				main();
			}
			return ;
		}
		p=p->next;
	}
	printf("您的输入有误 ! \n");
	return ;
}





struct student *cha_ru(struct student *studenthead)     //------插入学生资料
{
	struct student *p,*studentp;
	int k,i=0,j;
	if(studenthead==NULL)
	{
		printf("学生信息为空，无法插入!\n");	/*如果链表为空*/
		return studenthead;
	}      /*输入插入结点数据*/
	p=studenthead;
	while(p!=NULL)
	{
		p=p->next;
		i++;
	}
	printf("有1到%d个位置可以选择，输入新插入位置：",i+1);
	scanf("%d",&i);          
	k=1;
	studentp=studenthead;
	while(studentp!=NULL&&k<i-1)
	{
		studentp=studentp->next;
		k=k+1;
	}
	if(studentp==NULL||i<1)
		printf("插入位置为无效值\n");
	else if(i==1)                                    ///头节点插入
	{
		if((p=(struct student*)malloc(sizeof(struct student)))==NULL)
		{
			printf("内存申请错误！\n");
			exit(0);
		}
		printf("学号、姓名、性别、宿舍号码、电话号码：\n");
		scanf("%s%s%s%d%s",p->xuehao,p->name,p->xingb,&p->sushe,p->dianhua);       ///插入信息
		p->next=studenthead;
		studenthead=p;	
		printf("是否保存:  1.保存 \t2.放弃\n");
		scanf("%d",&j);
		if(j==1)
			bao_cunA(studenthead);
	}
	else
	{ 
		if((p=(struct student*)malloc(sizeof(struct student)))==NULL)               //不是头节点的插入
		{ 
			printf("内存申请错误！\n");
			exit(0);
		}
		printf("学号、姓名、性别、宿舍号码、电话号码：\n");
		scanf("%s%s%s%d%s",p->xuehao,p->name,p->xingb,&p->sushe,p->dianhua);         ///插入信息
		p->next=studentp->next; 
		studentp->next=p;
		printf("是否保存:  1.保存 \t2.放弃\n");
		scanf("%d",&j);
		if(j==1)
			bao_cunA(studenthead);
	}
	
	return studenthead;
}




void bao_cunA(struct student *studenthead)    //-----将链表信息保存到A.txt文本文件
{
	struct student *p;
	FILE *fp;
	if((fp=fopen("A.txt","w"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	if(studenthead==NULL)
	{
		printf("打开失败，链表为空！");
		return;
	}
	p=studenthead;
	fprintf(fp,"学号     姓名     性别      宿舍号码      电话     \n");
	while(p!=NULL)
	{
		fprintf(fp,"%-10s%-10s%-10s%-10d%-10s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
		p=p->next;
	}
	fclose(fp);
	printf("保存完毕！");
	return;
}




void bao_cunB(struct student *studenthead)    //-----将链表信息保存到B.txt文本文件
{
	struct student *p;
	FILE *fp;
	int i=0;
	if((fp=fopen("C.txt","w"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	if(studenthead==NULL)
	{
		printf("打开失败，链表为空！");
		return;
	}
	p=studenthead;
	fprintf(fp,"学号    课程编号    课程名称     学分    平时成绩    实验成绩   卷面成绩    综合成绩    实得学分   \n");
	while(p!=NULL)  
	{  
		for(i=0;i<10;i++)
			if(p->xuefen[i] != -1)
				fprintf(fp,"%-10s%-10s%-15s%-10d%-10d%-10d%-10d%-11.2lf%-10.2lf\n",p->xuehao,p->kcID[i],p->kcname[i],p->xuefen[i],p->chengji[i][0],p->chengji[i][1],p->chengji[i][2],p->zonghe[i][0],p->zonghe[i][1]);
			p=p->next;
	}
	fclose(fp);
	printf("保存完毕！");
	return;
}

struct student *deleall(struct student *studenthead)/////---------释放节点
{
	struct student *p;
	p=studenthead;
	while(p!=NULL)
	{
		studenthead=p->next;
		free(p);
		p=studenthead;
	}
	return p;
}





