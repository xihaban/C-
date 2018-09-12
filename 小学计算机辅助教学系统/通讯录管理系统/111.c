#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct list
{
	char name[20];              //����
	char home[50];               //��ͥ��ַ
	long bian[20];                //����
	char hao[25];                //����
	char xing[10];               //�Ա�
	struct list *next;
};

struct list *dele(struct list *head);           //ɾ������//
struct list *insert(struct list *head);         //���ģ��
void display(struct list *head);               //���ģ��
struct list *create();                          //����ģ��
void xiugai(struct list *head);                ///�޸�ģ��
void chaxun(struct list *head);                 //��ѯģ�� 
struct list *ti_qu(struct list *head);           /////���ĵ�����ȡ��Ϣ
void cu_cun(struct list *listhead);               ///������������ı�
struct list *deleall(struct list *listhead);    /*�ͷ�����ȫ�����*/
int main()
{
	int ch,d;
	struct list *head;
	head=NULL;
	printf(" \n\n\n\t��ӭʹ��ѧ��ͨѶ����ϵͳ\n\n\n\n");
	system("pause");
	while(1)
	{ 
		system("cls");/////////////////////����
		printf("\n\t                ��ӭʹ��ѧ��ͨѶ����ϵͳ             \n");
		printf("\t ----------------------------------------------------------------------\n");
		printf("\tح********************************************************************ح\n");
		printf("\tح*                                                                  *ح\n");
		printf("\tح* 1.¼������   2.��ѯ������Ϣ   3.���ȫ��ѧ����Ϣ   4.�޸���Ϣ    *ح\n");
		printf("\tح********************************************************************ح\n");
		printf("\tح* 5.ɾ������   6.���ѧ����Ϣ   7.���ĵ��ж�ȡ��Ϣ  0.�˳�ϵͳ    *ح\n");
		printf("\tح*                                                                  *ح\n");
		printf("\t-----------------------------------------------------------------------\n");
		printf("��ѡ������Ž��в���\n");
		scanf("%d",&ch);
		system("cls");/////////////////////����
		switch(ch)
		{
		case 1:head=create();break;        //����
		case 2:chaxun(head);break;         //��ѯ
		case 3:display(head);break;           //���
		case 4:xiugai(head);break;             //�޸� 
		case 5:head=dele(head);break;         //ɾ��
		case 6:head=insert(head);break;     //���
		case 7:head=ti_qu(head);break;    /////���ĵ�����ȡ��
		case 0:
			printf("�Ƿ񱣴��޸ģ�1�������ݣ�����2�����棡");
			scanf("%d",&d);
			if(d==1)
				cu_cun(head);
			head=deleall(head);break;        //�˳�
		default:printf("\n\n������������\n\n");
			
		}	
		if(ch==0)
			break;
		system("pause");

	}
	printf("\n\n\n\n\t\t��л����ʹ�ã�\n\n\n");
	return 0;
}





struct list *create()     ///-------------------¼��ѧ����Ϣ
{
	struct list *listhead,*p,*listp;
	int x,i,d;
	listhead=NULL;
	printf("\n\n\t\t��ѡ��1���������룬2���ı���ȡ��");
	scanf("%d",&d);
	if(d==1)
	{
		printf("������ѧ����������");
		scanf("%d",&x);
		printf("����ѧ����Ϣ��\n");
		for(i=0;i<x;i++)
		{
			if((p=(struct list*)malloc(sizeof(struct list)))==NULL)//�����ڵ�
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
			printf("������������������ͥ��ַ���������롢���롢�Ա�\n\n");
			scanf("%s%s%s%s%s",listp->name,listp->home,listp->bian,listp->hao,listp->xing);
			if(x>1&&i<x-1)
			printf("��������һ��ѧ����Ϣ��\n");
			
		}
	}
	else if(d==2)
		listhead=ti_qu(listhead);/////���ĵ�����ȡ��Ϣ
	else printf("������������");
	return listhead;
}




void display(struct list *listhead)             //---------���������Ϣ
{
	FILE*fp;
	char ch;int i;
	struct list *p;
	printf("��ѡ��1���������Ϣ��2����ĵ���Ϣ��");
	scanf("%d",&i);
	if(i==1)
	{
		if(listhead==NULL)
		{
			printf("�Ҳ���ͨѶ��Ϣ��");
			return;
		}
		p=listhead;
		printf("����      ��ͥסַ           �ʱ�       ����         �Ա�  \n");
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
			printf("�ļ��������ڣ��Ҳ���ͨѶ��Ϣ��");
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






struct list *insert(struct list *listhead)     //------����ѧ������
{
	struct list *p,*listp;
	int k,i=0;
	if(listhead==NULL)
	{
		printf("ͨѶ¼��û������\n");	/*�������Ϊ��*/
		return listhead;
	}      /*�������������*/
	p=listhead;
	while(p!=NULL)
	{
		p=p->next;
		i++;
	}
	printf("��1��%d��λ�ÿ���ѡ�������²���λ�ã�",i+1);
	scanf("%d",&i);          
	k=1;
	listp=listhead;
	while(listp!=NULL&&k<i-1)
	{
		listp=listp->next;
		k=k+1;
	}
	if(listp==NULL||i<1)
		printf("����λ��Ϊ��Чֵ\n");
	else if(i==1)                      ///ͷ�ڵ����
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)
		{
			printf("�ڴ��������\n");
			exit(0);
		}
		printf("��������ͥ��ַ���������롢���롢�Ա�\n");
		scanf("%s%s%s%s%s",p->name,p->home,p->bian,p->hao,p->xing);   ///������Ϣ
		p->next=listhead;
		listhead=p;
	}
	else
	{
		if((p=(struct list*)malloc(sizeof(struct list)))==NULL)  //����ͷ�ڵ�Ĳ���
		{
			printf("�ڴ��������\n");
			exit(0);
		}
		printf("��������ͥ��ַ���������롢���롢�Ա�\n");
		scanf("%s%s%s%s%s",p->name,p->home,p->bian,p->hao,p->xing);  ///������Ϣ
		p->next=listp->next;
		listp->next=p;
	}
	return listhead;
}






struct list *dele(struct list *listhead)     //-------------ɾ��ѧ������
{
	struct list *p,*listp,*R;
	int k;
	char n[10];
	if(listhead==NULL)
	{
		printf("��ͨѶ¼��������¼��ѧ����Ϣ��\n");
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
		p=listhead;            /*pָ���1�����*/
		listhead=p->next;///��1������������ڶ�������Ϊ��һ�����
		free(p);       //�ͷ�ɾ���Ľڵ�
	}
	else if(R!=NULL&&!(strcmp(n,R->name)))
	{
		p=listp->next;       
		listp->next=p->next;
		free(p);
	}
	return listhead;
}



struct list *deleall(struct list *listhead)/////---------�ͷŽڵ�
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



void xiugai(struct list *head)//--------------------�޸�ѧ����Ϣ
{
	struct list *p;
	char n[10];
	p=head;
	printf("������Ҫ�ĵ�ѧ����������");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("���ѧ������������ͥ��ַ���ʱࡢ���롢�Ա������޸ģ�");
			scanf("%s%s%s%s%s",p->name,p->home,p->bian,p->hao,p->xing);
			return ;
		}
		p=p->next;
	}
    printf("������������");
	return;
	
}




void chaxun(struct list *head)///////��ѯ
{
	struct list *p;
	char n[10];
	int k;
	p=head;
	if(head==NULL)
	{
	printf("\t�Ҳ���ѧ��ͨѶ¼���뽨��ѧ��ͨѶ¼!\n\n");
	return;
	}
	printf("��ѡ��1.������ѯ,2.�����ѯ��");
	scanf("%d",&k);
	if(k==1)
	{
	printf("������Ҫ��ѯ��ѧ����������");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->name,n)))
		{
			printf("������   %s\n��ͥסַ��%s\n�ʱࣺ   %s\n���룺   %s\n�Ա�   %s\n",p->name,p->home,p->bian,p->hao,p->xing);
			return ;
		}
		p=p->next;
	}}
   else if(k==2)
   {
		printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	scanf("%s",n);
	while(p!=NULL)
	{
		if(!(strcmp(p->hao,n)))
		{
			printf("������   %s\n��ͥסַ��%s\n�ʱࣺ   %s\n���룺   %s\n�Ա�   %s\n",p->name,p->home,p->bian,p->hao,p->xing);
			return ;
		}
		p=p->next;
	}
   }
    printf("\n\t������������\n\n");
	return;
	
}



void cu_cun(struct list *listhead)//-----��������Ϣд���ı��ļ�
{
	struct list *p;
	FILE *fp;
	if((fp=fopen("student.txt","w"))==NULL)
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}
	if(listhead==NULL)
	{
		printf("��ʧ�ܣ�����Ϊ�գ�");
		return;
	}
	p=listhead;
	fprintf(fp,"����      ��ͥסַ           �ʱ�      ����           �Ա�     \n");
	while(p!=NULL)
	{
		fprintf(fp,"%-10s%-19s%-10s%-16s%-3s\n",p->name,p->home,p->bian,p->hao,p->xing);
		p=p->next;
	}
	fclose(fp);
	printf("������ϣ�");
}




struct list *ti_qu(struct list *listhead)/////���ĵ�����ȡ��Ϣ
{
    FILE *fp;
	struct list *p,*listp,*f;
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
				fscanf(fp,"%s%s%s%s%s",listp->name,listp->home,listp->bian,listp->hao,listp->xing);
				f=listp;k++;
			}
			else
			{
				if((p=(struct list*)malloc(sizeof(struct list)))==NULL)//�����ڵ�
				{
					printf("�ڴ����");
					exit(0);
				}
				if(listhead==NULL)
					listhead=p;
				else
					listp->next=p;        //���ӽڵ�
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
		p=listhead;            //pָ���1�����
		listhead=p->next;      ///��1������������ڶ�������Ϊ��һ�����
		free(p);       //�ͷ�ɾ���Ľڵ�
	}
	p=listp;
    f->next=NULL;
	free(p);
	p=listhead;
	printf("����      ��ͥסַ           �ʱ�       ����         �Ա�  \n");
	while(p!=NULL)
	{
		printf("%-10s%-19s%-10s%-15s%-3s\n",p->name,p->home,p->bian,p->hao,p->xing);
		p=p->next;
	}
printf("��ȡ��ϣ�\n");
	fclose(fp);
	return listhead;
}
