#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char xuehao[2];      //ѧ��
	char name[10];      //����
	char xingb[5];      //�Ա�
	char sushe[10];        //�����
	char dianhua[13];      //�绰
	struct student *next;
	
};
struct sore
{
    char xuehao[2];		//ѧ��
	char kcID[3];		//�γ̱��
	char kcname[10];	//�γ�����
	int xuefen;			//ѧ��
	int pscj;			//ƽʱ�ɼ�
	int sycj;			//ʵ��ɼ�
	int jmcj;			//����ɼ�
	struct sore *next;
};
struct student *lu_ru(struct student *head);//���ı�¼�������Ϣ
struct sore *create();                 //����¼��ѧ���ɼ�
void chaxun(struct student *head);  //��ѯ��Ϣģ��
void cha_xun(struct sore *head);
void display(struct student *head);            //���ģ��
struct student *dele(struct student *head);  //ɾ������
void xiugai(struct student *head);			//�޸�����
int main()
{
	int m;
	struct student *head;
    struct sore *shead;
	head=NULL;
	while(1)
	{
		printf("\t\t\t------����(0-5)ѡ��----\t\t\t\n");
		printf("\n\n\n\t\t(*^__^*)��ӭʹ��ѧ������ϵͳ(*^__^*)\n\n\n\n");
		printf("\t\t----���-��ӭʹ��ѧ������ϵͳ-���---\n");	
		printf("\t\t*==================================*\n");
		printf("\t\t*   1.¼��ѧ����Ϣ   2.��ѯѧ����Ϣ*\n");
		printf("\t\t*\t\t\t\t   *\n");
		printf("\t\t*==================================*\n");	
		printf("\t\t*   3.ɾ��ѧ����Ϣ   4.�޸�ѧ����Ϣ*\n");
		printf("\t\t*\t\t\t\t   *\n");
		printf("\t\t*==================================*\n");
		printf("\t\t*  5.�������ѧ����Ϣ 0.�˳�ϵͳ   *\n");
		printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\t����ѡ���� ");
		scanf("%d",&m);
		system("cls");                  //�����Ļ��Ϣ
		switch(m)
		{
		case 1:head=create();break;
		case 2:chaxun(head);break;
		case 3:head=dele(head);break;
		case 4:xiugai(head);break;
		case 5:display(head);break;
		case 0: exit(0);break;
		default:printf("\t��������");
		}

			system("pause");

	}
	
	printf("\n\n\n\n\t��л����ʹ��!\n\n\n");
	
}



///-------------------¼��ѧ����Ϣ
struct sore *create()          
{
	struct sore *listhead,*p,*listp;
	int x,i,d;
	listhead=NULL;
	printf("\n\n\t\t��ѡ��1���Ӽ���¼��ɼ���2���ı���ȡѧ��������Ϣ��\n");
	scanf("%d",&d);
	if(d==1)
	{
		printf("������ѧ����������");
		scanf("%d",&x);
		printf("����ѧ����Ϣ��\n");
		for(i=0;i<x;i++)
		{
			if((p=(struct sore*)malloc(sizeof(struct sore)))==NULL)//�����ڵ�
			{
				printf("�ڴ����");
				exit(0);
			}
			if(listhead==NULL)
				listhead=p;
			else
				listp->next=p;        //���ӽڵ�
			listp=p;
			listp->next=NULL;
			printf("����������ѧ�š��γ̱�š��γ����ơ�ѧ�֡�ƽʱ�ɼ���ʵ��ɼ�������ɼ�:\n");
			scanf("%s %s %s %s %s %s %s",listp->xuehao,listp->kcID,listp->kcname,listp->xuefen,listp->pscj,listp->sycj,listp->jmcj);
			if(x>1&&i<x-1)
				printf("��������һ��ѧ����Ϣ��\n");
			
		}
	}
	else if(d==2)
		listhead=lu_ru(listhead);/////���ĵ�����ȡ��Ϣ
	else printf("������������\n");
	return listhead;
}



//-----------------------------���ĵ�����ȡ��Ϣ
struct student *lu_ru(struct student *listhead)        
{
    FILE *fp;
	struct student *p,*listp,*f;
	int k=0,i=0;
	if((fp=fopen("student.txt","r"))==NULL)
	{
		printf("�ļ��������ڣ�");
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
				if((p=(struct student*)malloc(sizeof(struct student)))==NULL)   //�����ڵ�
				{
					printf("�ڴ����");
					exit(0);
				}
				if(listhead==NULL)
					listhead=p;
				else
					listp->next=p;                                       //���ӽڵ�
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
		p=listhead;                   //pָ���1�����
		listhead=p->next;              ///��1������������ڶ�������Ϊ��һ�����
		free(p);                             //�ͷ�ɾ���Ľڵ�
	}
	p=listp;
    f->next=NULL;
	free(p);
	p=listhead;
	while(p!=NULL)
	{
		p=p->next;
	}
	printf("��ȡ��ϣ�\n");
	fclose(fp);
	return listhead;
}



void display(struct student *listhead)             //---------���������Ϣ
{
	FILE*fp;
	char ch;int i;
	struct student *p;
	printf("��ѡ��1���������Ϣ��2����ĵ���Ϣ��");
	scanf("%d",&i);
	if(i==1)
	{
		if(listhead==NULL)
		{
			printf("�Ҳ���ѧ����Ϣ��\n");
			return;
		}
		p=listhead;
		printf("ѧ��     ����      �Ա�       �������       �绰  \n");
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
			printf("�ļ��������ڣ��Ҳ���ѧ����Ϣ��");
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

///---------------------------��ѯ
void	 chaxun(struct student *head)     
{
	
	struct student *p;	
	char n[10];
	int m,k;
	p=head;
	if(head==NULL)
	{
		printf("\t\tѧ����ϢΪ�գ�����¼��ѧ����Ϣ��\n\n");
		return ;
	}
	printf("��ѡ��1.ѧ����Ϣ��ѯ��2.�ɼ���ѯ");
	scanf("%d",&m);
	if(m==1)
	{
		m=0;
		printf("��ѡ��1.������Ϣ��ѯ��2.ס����Ϣ��ѯ");
		scanf("%d",&k);
		if(k==1)
		{
			printf("��ѡ��1.������ѯ��2.ѧ�Ų�ѯ");
			scanf("%d",&m);
			if(m==1)
			{
				printf("������Ҫ��ѯ��ѧ����������");
				scanf("%s",n);
				while(p!=NULL)
				{
					if(!(strcmp(p->name,n)))
					{
						printf("ѧ�ţ� %s\n������ %s\n�Ա� %s\n������룺 %s\n�绰���룺%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
						
					}
					p=p->next;
				}
			}
			else if(m==2)
			{
				printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
				scanf("%s",n);
				while(p!=NULL)
				{
					if(!(strcmp(p->xuehao,n)))
					{
						printf("ѧ�ţ� %s\n������ %s\n�Ա� %s\n������룺 %s\n�绰���룺%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
						
					}
					p=p->next;
				}			
			}
		}
		else if(k==2)
		{
			printf("������Ҫ��ѯ��ѧ����������룺");
			scanf("%s",n);
			while(p!=NULL)
			{
				if(!(strcmp(p->sushe,n)))
				{
					printf("ѧ�ţ� %s\n������ %s\n�Ա� %s\n������룺 %s\n�绰���룺%s\n",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
					
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
		printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
		scanf("%s",n);
		while(q!=NULL)
		{
			if(!(strcmp(q->xuehao,n)))
			{
				printf("ѧ�ţ� %s\n",q->xuehao);
				return;
			}
			q=q->next;
		}	
	}
}




//----------------------ɾ��ѧ������
struct student *dele(struct student *listhead)  
{
	struct student *p,*listp,*R;
	int k;
	char n[10];
	if(listhead==NULL)
	{
		printf("ѧ����Ϣ�����ڣ���¼��ѧ����Ϣ��\n");
		return listhead;
	}
	printf("����Ҫɾ����ѧ����������");
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
		printf("ɾ����Ч\n");
	else if(k==1)
	{
		p=listhead;            //pָ���1�����
		listhead=p->next;      //��1������������ڶ�������Ϊ��һ�����
		free(p);               //�ͷ�ɾ���Ľڵ�
	}
	else if(R!=NULL&&!(strcmp(n,R->name)))
	{
		p=listp->next;       
		listp->next=p->next;
		free(p);
	}
	return listhead;
}


//--------------------�޸�ѧ����Ϣ
void xiugai(struct student *head)
{
	struct student *p;
	char n[10] ;
	p=head;
	printf("������Ҫ�޸�ѧ����Ϣ��������");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("���ѧ����ѧ�š��������Ա�������롢�绰�����޸ģ�");
			scanf("%s%s%s%s%s",p->xuehao,p->name,p->xingb,p->sushe,p->dianhua);
			return ;
		}
		p=p->next;
	}
	printf("������������");
	return head;
}




/*void xiu_gai(struct sore *head)
{
struct sore *p;
p=head;
char n[10];
printf("������Ҫ�޸�ѧ����Ϣ��ѧ�ţ�");
scanf("%s",n);
while(p!=NULL)
{
if(!(strcmp(p->xuehao,n)))
{
printf("���ѧ����ѧ�š��γ̱�š��γ����ơ�ѧ�֡�ƽʱ�ɼ���ʵ��ɼ�������ɼ������޸ģ�");
scanf("%s%s%s%s%s%s%s",p->xuehao,p->kcID,p->kcname,p->xuefen,p->pscj,p->sycj,p->jmcj);
return ;
}
p=p->next;
}
printf("������������");
return;
}*/


/*int RendfromFile (STUDENT stu[])   //   ¼��ѧ����Ϣ
{
FILE * fp;
int i;
if((fp=fopen("A.txt","r"))==NULL)  //�Զ���ʽ���ı��ļ�
{
printf("Failure to open A.txt!\n");  //�ļ���ʧ��
exit(0);
}
for(i=0;!feof(fp);i++)
{
fread(&stu[i],sizeof(STUDENT),l,fp);
}
fcolse (fp);
printf ("Total students is %d.\n");   //�����ļ��е�ѧ���ļ�¼��
return i-1;
}
}
*/
















